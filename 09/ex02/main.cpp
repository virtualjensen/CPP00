#include "PmergeMe.hpp"

int main(int ac, char **av) {
    PmergeMe p(av);

    if (ac <= 1){
        std::cout << "not enough arguments" << std::endl;
        return 1;
    }

    std::vector<std::pair<int, int> > pairs = {{5, 5}, {2, 3}, {6, 8}, {4, 2}, {7, 1}};
    std::size_t n = pairs.size();

    std::cout << "before sort: " << std::endl;
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << "(" << pairs[i].first << ", " << pairs[i].second << ") " << std::endl;
    }

    p.sortPairSequenceVec(pairs, n);

    std::cout << "after sort: " << std::endl;
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << "(" << pairs[i].first << ", " << pairs[i].second << ") " << std::endl;
    }

    return 0;
}