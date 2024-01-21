#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <sstream>
#include <exception>

class RPN{
    private:
        std::stack<int> _nums;
        bool    validateInput(std::string input);
        bool    isOperator(std::string input);
        void    doOperations(std::string input);
    public:
        RPN();
        RPN(const RPN&);
        RPN &operator=(const RPN&);
        ~RPN();
        int calculate(std::string input);



};

#endif