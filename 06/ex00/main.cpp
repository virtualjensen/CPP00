#include "ScalarConverter.hpp"
int main(int argc, char **argv){
    if (argc != 2)
        return 1;
    try {
        ScalarConverter::convert(argv[1]);    // Output: char: A, int: 65, float: 65, double: 65
    }
    catch (std::exception &e){
        std::cout << "Input Invalid" << std::endl;
        return 1;
    }
    return 0;
}