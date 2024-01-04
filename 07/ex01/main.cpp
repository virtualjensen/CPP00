#include "Iter.hpp"
#include <iostream>

template <typename T> void newline(T &a){
    std::cout << a << std::endl;
}

int main(){
    int num_array[] = {1, 2, 3, 4, 5};
    std::string str_array[] = {"im", "sleep", "now"};

    std::cout << "------number array-----" << std::endl;
    iter(num_array, 5, newline);
    std::cout << "------string array-----" << std::endl;
    iter(str_array, 3, newline);
    std::cout << "------char array-----" << std::endl;
    iter(str_array[0].c_str(), str_array[0].length(), newline);
    std::cout << std::endl;
}