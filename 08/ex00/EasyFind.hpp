#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <exception>

template <typename T> 
int easyfind(T& container, int toFind){
    typename T::iterator iter = std::find(container.begin(), container.end(), toFind);
    if (iter != container.end())
        return *iter;
    else
        throw std::out_of_range("Element not found");
}

#endif