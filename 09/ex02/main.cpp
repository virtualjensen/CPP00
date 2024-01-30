#include "PmergeMe.hpp"

int main(int ac, char **av) {

    if (ac <= 1){
        std::cout << "Usage: ./PmergeMe *string of int*" << std::endl;
        return 1;
    }

    try{
        PmergeMe p(av);
        p.run();
    }catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}