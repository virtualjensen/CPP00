#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){
    (void)copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy){
    (void)copy;
    return (*this);
}

static void    printInt(double num){
    int intMax = std::numeric_limits<int>::max();
    int intMin = std::numeric_limits<int>::min(); 

	std::cout << "int: ";
	if (num > intMax || num < intMin)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
}

static void    printChar(double c){
    std::cout << "char: ";
    if (c > 31 && c < 127)
        std::cout << static_cast<char>(c) << std::endl;
    else if (c > 255 || c < 0)
        std::cout << "impossible" << std::endl;
    else
        std::cout << "non displayable" << std::endl;
}

static void    printFloat(float f){
    std::cout << "float: " << f;
	if (fmod(f, 1) == 0 && (f <= SCI_LIMIT && f >= -SCI_LIMIT)) // if the float doesn't have a decimal portion and it wont become scientific notation
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

static void    printDouble(double d){
    std::cout << "double: " << d;
	if (fmod(d, 1) == 0 && (d <= SCI_LIMIT && d >= -SCI_LIMIT))
		std::cout << ".0";
	std::cout << std::endl;
}

static bool isInt(std::string input){
    if (input.empty())
        return false ;
    if (input[0] == '-' || input[0] == '+')
        input = input.substr(1);
    for (size_t i = 0; i < input.length(); i++){
        if (!isdigit(input[i]))
            return false ;
    }
    return true;
}

static bool    isFloat(std::string input){
    if (input[input.length() - 1] != 'f')
        return false ;
    if (input[0] == '-' || input[0] == '+')
        input = input.substr(1);
    size_t decimal_pos = input.find('.');
    if (decimal_pos == std::string::npos)
        return false;
    std::string before = input.substr(0, decimal_pos);
    std::string after = input.substr(decimal_pos + 1, input.length() - decimal_pos - 2);
    if (isInt(before) && isInt(after))
        return true;
    return false;
}


static bool    isDouble(std::string input){
    size_t decimal_pos = input.find('.');
    if (decimal_pos == std::string::npos)
        return false;
    if (input[0] == '-' || input[0] == '+')
        input = input.substr(1);
    std::string before = input.substr(0, decimal_pos);
    std::string after = input.substr(decimal_pos + 1);
    if (isInt(before) && isInt(after))
        return true;
    return false ;
}

static bool    isPseudo(std::string literal){
    if (literal == "-inf" || literal == "+inf" || literal == "inf" || literal == "nan"){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal << "f" << std::endl;
        std::cout << "double: " << literal << std::endl;
        return true ;
    }
    else if (literal == "-inff" || literal == "+inff" || literal == "inff" || literal == "nanf"){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
        return true ;

    }
    return false ;
}

static bool    convertFromFloat(std::string literal){
    if (isPseudo(literal))
        return true ;
    if (!isFloat(literal))
        return false ;
    std::stringstream ss(literal);
    double f;
    ss >> f;
    printChar((f));
    printInt((f));
    printFloat(f);
    printDouble((f));
    return true;
}

static bool    convertFromInt(std::string literal){
    if (!isInt(literal))
        return false ;
    std::stringstream ss(literal);
    double i;
    ss >> i;
    printChar((i));
    printInt(i);
    printFloat((i));
    printDouble((i));
    return true;
}

static bool    convertFromDouble(std::string literal){
    if (!isDouble(literal))
        return false ;
    std::stringstream ss(literal);
    double d;
    ss >> d;
    printChar(d);
    printInt((d));
    printFloat((d));
    printDouble(d);
    return true;
}

static bool    convertFromChar(std::string literal){
    if (literal.length() != 1)
        return false;
    // std::stringstream ss(literal.substr(0, 1));
    double d = static_cast<double>(literal[0]);
    printChar(d);
    printInt((d));
    printFloat((d));
    printDouble(d);
    return true;
}

void ScalarConverter::convert(std::string literal){
    if (convertFromFloat(literal))
        return ;
    if (convertFromDouble(literal))
        return ;
    if (convertFromInt(literal))
        return ;
    if (convertFromChar(literal))
        return ;
    throw   std::exception();
}


