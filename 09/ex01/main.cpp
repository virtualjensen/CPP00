#include "RPN.hpp"
#include <iomanip>

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Invalid Arguments" << std::endl;
        return 1;
    }
    RPN rpn;
    try {
        double result = rpn.calculate(av[1]);
        std::cout << "Result: " << result << std::endl;
    } 
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

}