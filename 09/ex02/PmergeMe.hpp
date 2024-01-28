#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <utility>
#include <iostream>


class PmergeMe{
    private:
        std::vector<int>    _vecNum;
        std::deque<int>     _dqNum;
        bool                _error;
        int                 _last;

        std::vector<std::pair<int, int> > createPairVec();
        void    sortPairVec(std::vector<std::pair<int, int> > &pairs);
        void    sortPairSequenceVec(std::vector<std::pair<int,int> > &pair, size_t n);

        PmergeMe();

    public:
        PmergeMe(char **av);
        PmergeMe(const PmergeMe&);
        PmergeMe &operator=(const PmergeMe&);
        ~PmergeMe();

        std::vector<int>    mergeInsertionVec();
        
        template <typename Container>
        void printContainer(const Container& cont) const {
            typename Container::const_iterator it;
            for (it = cont.begin(); it != cont.end(); ++it) {
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        }
        

};
#endif
