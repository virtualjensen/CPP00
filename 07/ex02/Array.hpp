#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
template<typename T> class Array{
    private:
        T   *_elements;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array &operator=(const Array&);
        Array(const Array&);
        const T &operator[](unsigned int index) const;
        T &operator[](unsigned int index);
        ~Array();

        unsigned int size() const;

};

#include "Array.tpp"

#endif