#include "PmergeMe.hpp"

//1 store numbers in container 
//2 make a pair of each two consecutive numbers 
//3 sort each pair of numbers, making sure the right side is the greater number
//4 sort the pairs in asscending order based on the second number, recursively
//5 create a new sequence that holds the first pair and the second number in each pair
//6 insert remaining numbers in sorted sequence (optimized sorting binary insertion sequence shenanigans)

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(char **av){
    //1 stores number in container
    _error = false;
    for (int i =1; av[i] && !_error; i++){
        if ((std::string(av[i]).length() > 10 )
            || std::string(av[i]).find_first_not_of("0123456789+") != std::string::npos){
            _error = true;
        }
        int num = atoi(av[i]);
        if ((num < 0 || atol(av[i]) > std::numeric_limits<int>::max())
        || std::find(_vecNum.begin(), _vecNum.end(), num) != _vecNum.end())
            _error = true;
        else {
            _vecNum.push_back(num);
            _dqNum.push_back(num);
        }
    }
    printContainer(_vecNum);
    printContainer(_dqNum);
}

//2 make a pair of each two consecutive numbers 
std::vector<std::pair<int, int>> PmergeMe::createPairVec(){
    std::vector<std::pair<int, int>> pair;
    if (_vecNum.size() % 2 != 0){
        _last = _vecNum[_vecNum.size() - 1];
        _vecNum.pop_back();
    }
    for (std::vector<int>::iterator it = _vecNum.begin(); it != _vecNum.end(); it++) {
        pair.push_back(std::make_pair(*it, *(++it)));
    }
    return pair;
}

//3 sort each pair of numbers, making sure the right side is the greater number
void    PmergeMe::sortPairVec(std::vector<std::pair<int, int>> &pairs){
    for(std::vector<std::pair<int,int>>::iterator it = pairs.begin(); it != pairs.end(); it++){
        if(it->first > it->second){
            std::swap(it->first, it->second);
        }
    }
}

//4 sort the pairs in asscending order based on the second number, recursively
void PmergeMe::sortPairSequenceVec(std::vector<std::pair<int, int>>& pairs, std::size_t n) {
    if (n == 1) {
        return;
    }
    for (std::size_t i = 0; i < n - 1; ++i) {
        if (pairs[i].second > pairs[i + 1].second) {
            std::swap(pairs[i], pairs[i + 1]);
        }
    }
    sortPairSequenceVec(pairs, n - 1);
}

