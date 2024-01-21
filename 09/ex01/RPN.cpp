#include "RPN.hpp"

RPN::RPN() {}

RPN &RPN::operator=(const RPN& og){
    this->_nums = og._nums;
    return (*this);
}

RPN::RPN(const RPN &og) {
    *this = og;
}

RPN::~RPN(){
    std::cout << "RPN destructor called" << std::endl;
}

bool    RPN::validateInput(std::string input){
    if (input.find_first_not_of("0123456789*+-/ ") == std::string::npos)
        return true;
    return false;
}

bool    RPN::isOperator(std::string input){
    if (input.find_first_not_of("+-*/") == std::string::npos)
        return true ;
    return false ;
}

void    RPN::doOperations(std::string input){

    int a, b;
    b = _nums.top();
    _nums.pop();
    a = _nums.top();
    _nums.pop();

    if (input == "+")
        _nums.push(a + b);
    else if (input == "-")
        _nums.push(a - b);
    else if (input == "*")
        _nums.push(a * b);
    else if (input == "/"){
        if (b == 0){
            throw std::runtime_error("Division by zero");
        }
        _nums.push(a / b);
    }
}

int RPN::calculate(std::string input){
    if (!validateInput(input))
        throw std::invalid_argument("Invalid input");
    std::stringstream ss;
    ss << input;
    std::string token;
    while (ss >> token){
        if (token.size() == 1 && std::isdigit(token[0])){
            _nums.push(token[0] - 48);
        } else if (isOperator(token)){
            if (_nums.size() < 2) {
                throw std::runtime_error("Not enough operands for operation");
            }
            doOperations(token);
        }
    }
    if (_nums.size() != 1)
        throw std::runtime_error("Not enough operators");
    return _nums.top();
}

