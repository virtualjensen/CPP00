#include <iostream>
#include <istream> 
#include "BitcoinExchange.hpp"

//test for leap year dates
//test for invalid dates

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Input a file name" << std::endl;
        return 1;
    }
    BitcoinExchange btc(av[1]);
    try{
        btc.run();
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}