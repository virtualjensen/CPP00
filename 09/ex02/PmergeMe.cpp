#include "PmergeMe.hpp"

//1 store numbers in container 
//2 make a pair of each two consecutive numbers 
//3 sort each pair of numbers, making sure the right side is the greater number
//4 sort the pairs in asscending order based on the second number, recursively
//5 create a new sequence that holds the first pair and the second number in each pair
//6 insert remaining numbers in sorted sequence (optimized sorting binary insertion sequence shenanigans)

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &og){
    this->_vecNum = og._vecNum;
    this->_dqNum = og._dqNum;
    this->_last = og._last;
    return *this;
}

PmergeMe::PmergeMe(const PmergeMe& og){
    *this = og;
}

//1 stores number in container
PmergeMe::PmergeMe(char **av) :  _last(-1), sorted(false) {
    for (int i = 1; av[i]; i++){
        if ((std::string(av[i]).length() > 10 )
            || std::string(av[i]).find_first_not_of("0123456789+") != std::string::npos){
            throw std::invalid_argument("Error: Invalid Arguments");
        }
        int num = atoi(av[i]);
        if ((num < 0 || atol(av[i]) > std::numeric_limits<int>::max()))
            throw std::invalid_argument("Error: Number value out of range");
        if (std::find(_vecNum.begin(), _vecNum.end(), num) != _vecNum.end())
            throw std::invalid_argument("Error: Duplicates not allowed");

        else {
            _vecNum.push_back(num);
            _dqNum.push_back(num);
        }
    }
    checkSort();
}

void    PmergeMe::checkSort(){
    for (size_t i = 0; i < _vecNum.size() - 1; i++){
        if (_vecNum[i] > _vecNum[i + 1]){
            sorted = false;
            return ;
        }
    }
    sorted = true;
}

//2 make a pair of each two consecutive numbers 
std::vector<std::pair<int, int> > PmergeMe::createPairVec(){
    std::vector<std::pair<int, int> > pair;
    if (_vecNum.size() % 2 != 0){
        _last = _vecNum[_vecNum.size() - 1];
        _vecNum.pop_back();
    }
    for (size_t i = 0; i < _vecNum.size(); i += 2) {
        pair.push_back(std::make_pair(_vecNum[i], _vecNum[i + 1]));
    }
    return pair;
}

//3 sort each pair of numbers, making sure the right side is the greater number
void    PmergeMe::sortPairVec(std::vector<std::pair<int, int> > &pairs){
    for(std::vector<std::pair<int,int> >::iterator it = pairs.begin(); it != pairs.end(); it++){
        if(it->first > it->second){
            std::swap(it->first, it->second);
        }
    }
}

//4 sort the pairs in asscending order based on the second number, recursively
void PmergeMe::sortPairSequenceVec(std::vector<std::pair<int, int> >& pairs, std::size_t n) {
    if (n == 1 || n == 0) {
        return;
    }
    for (std::size_t i = 0; i < n - 1; ++i) {
        if (pairs[i].second > pairs[i + 1].second) {
            std::swap(pairs[i], pairs[i + 1]);
        }
    }
    sortPairSequenceVec(pairs, n - 1);
}

std::vector<int>    PmergeMe::mergeInsertionVec(){
    std::vector<std::pair<int,int> > pair;
    std::vector<int>::iterator it;
    std::vector<int> sorted;
    std::vector<int> unsorted;
    pair = createPairVec();
    sortPairVec(pair);
    sortPairSequenceVec(pair, pair.size());
    if (pair.size() > 0){

        std::vector<std::pair<int,int> >::iterator firstPair = pair.begin();
        if (firstPair != pair.end())
        {
            sorted.push_back(firstPair->first);
            sorted.push_back(firstPair->second);
        }
        for (std::vector<std::pair<int,int> >::iterator it = pair.begin() + 1; it < pair.end(); it++){
            sorted.push_back(it->second);
            unsorted.push_back(it->first);
        }

        while(unsorted.size() > 0){
            it = std::lower_bound(sorted.begin(), sorted.end(), unsorted.back());
            sorted.insert(it, unsorted.back());
            unsorted.pop_back();
        }
    }
    if (_last != -1){
        it = std::lower_bound(sorted.begin(), sorted.end(), _last);
        sorted.insert(it, _last);
    }
    return (sorted);
}

///////DEQUE//////////

//2 make a pair of each two consecutive numbers 
std::deque<std::pair<int, int> > PmergeMe::createPairDq(){
    std::deque<std::pair<int, int> > pair;
    if (_dqNum.size() % 2 != 0){
        _last = _dqNum[_dqNum.size() - 1];
        _dqNum.pop_back();
    }
    for (size_t i = 0; i < _dqNum.size(); i += 2) {
        pair.push_back(std::make_pair(_dqNum[i], _dqNum[i + 1]));
    }
    return pair;
}

//3 sort each pair of numbers, making sure the right side is the greater number
void    PmergeMe::sortPairDq(std::deque<std::pair<int, int> > &pairs){
    for(std::deque<std::pair<int,int> >::iterator it = pairs.begin(); it != pairs.end(); it++){
        if(it->first > it->second){
            std::swap(it->first, it->second);
        }
    }
}

//4 sort the pairs in asscending order based on the second number, recursively
void PmergeMe::sortPairSequenceDq(std::deque<std::pair<int, int> >& pairs, std::size_t n) {
    if (n == 1 || n == 0) {
        return;
    }
    for (std::size_t i = 0; i < n - 1; ++i) {
        if (pairs[i].second > pairs[i + 1].second) {
            std::swap(pairs[i], pairs[i + 1]);
        }
    }
    sortPairSequenceDq(pairs, n - 1);
}

std::deque<int>    PmergeMe::mergeInsertionDq(){
    std::deque<std::pair<int,int> > pair;
    std::deque<int>::iterator it;
    std::deque<int> sorted;
    std::deque<int> unsorted;
    pair = createPairDq();
    sortPairDq(pair);
    sortPairSequenceDq(pair, pair.size());
    if (pair.size() > 0){
        std::deque<std::pair<int,int> >::iterator firstPair = pair.begin();
        sorted.push_back(firstPair->first);
        sorted.push_back(firstPair->second);

        for (std::deque<std::pair<int,int> >::iterator it = pair.begin() + 1; it < pair.end(); it++){
            sorted.push_back(it->second);
            unsorted.push_back(it->first);
        }

        while(unsorted.size() > 0){
            it = std::lower_bound(sorted.begin(), sorted.end(), unsorted.back());
            sorted.insert(it, unsorted.back());
            unsorted.pop_back();
        }
    }
    if (_last != -1){
        it = std::lower_bound(sorted.begin(), sorted.end(), _last);
        sorted.insert(it, _last);
    }
    return (sorted);
}

void    PmergeMe::run(){
    std::cout << "Before: ";
    printContainer(_vecNum);

    clock_t v_start = clock();
    _vecNum = mergeInsertionVec();
    clock_t v_end = clock();

    double vec_time = static_cast<double>(v_end - v_start)* 1000000 / CLOCKS_PER_SEC;

    clock_t dq_start = clock();
    _dqNum = mergeInsertionDq();
    clock_t dq_end = clock();
    double dq_time = static_cast<double>(dq_end - dq_start)* 1000000 / CLOCKS_PER_SEC;

    std::cout << "Vector After: ";
    printContainer(_vecNum);
    std::cout << "Deque After: ";
    printContainer(_dqNum);

    std::cout << "Time to process a range of " << _vecNum.size() << " elements with std::[vector] : "
        << vec_time << " us" << std::endl;

    std::cout << "Time to process a range of " << _dqNum.size() << " elements with std::[deque] : "
        << dq_time << " us" << std::endl;
}