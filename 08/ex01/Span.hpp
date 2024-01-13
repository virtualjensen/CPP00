#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span{
    private:
        size_t _maxSize; //max of ints that can be stored
        std::vector<int> _nums;

    public:
        Span();
        Span(size_t N);
        Span(const Span&);
        Span &operator=(const Span&);
        ~Span();

        void    printContent();
        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
        template <typename Iterator>
        void fillSpan(Iterator begin, Iterator end) {
            if ((std::distance(begin, end)) + _nums.size() > _maxSize)
                throw std::out_of_range("Span reached maximum capacity");
            while (begin != end){
                addNumber(*begin);
                ++begin;
            }
        }
};

#endif