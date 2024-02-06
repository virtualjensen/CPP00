#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>
#include <list>
#include <sstream>
#include <exception>

class RPN{
    private:
        std::stack<double, std::list<double> > _nums;
        bool    validateInput(std::string input);
        bool    isOperator(std::string input);
        void    doOperations(std::string input);
    public:
        RPN();
        RPN(const RPN&);
        RPN &operator=(const RPN&);
        ~RPN();
        double calculate(std::string input);

};

#endif