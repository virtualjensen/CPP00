#include "Span.hpp"

Span::Span() : _maxSize(0){}

Span::Span(size_t N) : _maxSize(N) {}

Span::Span(const Span& copy) : _maxSize(0), _nums(0) {
    *this = copy;
}

Span &Span::operator=(const Span &copy){
    if (this != &copy){
        this->_maxSize = copy._maxSize;
        this->_nums = copy._nums;
    }
    return *this;
}

Span::~Span(){}

void    Span::printContent(){
    for (size_t i = 0; i < _nums.size(); i++){
        std::cout << "[ " << _nums[i] << " ] ";
    }
    std::cout << std::endl;
}

void Span::addNumber(int n) {
    if (this->_nums.size() >= this->_maxSize) {
        throw std::out_of_range("Span reached maximum capacity");
    }
    this->_nums.push_back(n);
}

int Span::shortestSpan(){

    int min = std::numeric_limits<int>::max();
    std::sort(this->_nums.begin(), this->_nums.end());
    if (this->_nums.size() < 3)
        throw std::invalid_argument("Not enough elements");
    for (int i = 0; i < static_cast<int>(this->_nums.size() - 1); i++){
        int span = _nums[i + 1] - _nums[i];
        if (span < min){
            min = span;
        }
    }
    return min;
}

int Span::longestSpan(){
    std::sort(_nums.begin(), _nums.end());
    if (_nums.size() < 3)
        throw std::invalid_argument("Not enough elements");
    std::vector<int>::iterator begin = _nums.begin();
    std::vector<int>::iterator end = _nums.end() - 1;
    return(*end - *begin);
}