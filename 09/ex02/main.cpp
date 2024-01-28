#include "PmergeMe.hpp"

int main(int ac, char **av) {
    PmergeMe p(av);

    if (ac <= 1){
        std::cout << "Usage: ./PmergeMe *string of int*" << std::endl;
        return 1;
    }

    p.mergeInsertionVec();
    std::cout << "sorted: " << std::endl;
    p.printContainer(p.mergeInsertionVec());

    return 0;
}