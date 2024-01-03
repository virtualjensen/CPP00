#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>
# define SCI_LIMIT 999999

class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter&);
        ScalarConverter &operator=(const ScalarConverter&);
        ~ScalarConverter();
    public:
        static void convert(std::string literal);
};

#endif