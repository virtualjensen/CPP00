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
#include <exception>
#include <ctime>


class PmergeMe{
    private:
        std::vector<int>    _vecNum;
        std::deque<int>     _dqNum;
        int                 _last;

        std::vector<std::pair<int, int> > createPairVec();
        void    sortPairVec(std::vector<std::pair<int, int> > &pairs);
        void    sortPairSequenceVec(std::vector<std::pair<int,int> > &pair, size_t n);

        std::deque<std::pair<int, int> > createPairDq();
        void    sortPairDq(std::deque<std::pair<int, int> > &pairs);
        void    sortPairSequenceDq(std::deque<std::pair<int,int> > &pair, size_t n);

        void    checkSort();
        PmergeMe();

    public:
        PmergeMe(char **av);
        PmergeMe(const PmergeMe&);
        PmergeMe &operator=(const PmergeMe&);
        ~PmergeMe();

        bool                sorted;
        std::vector<int>    mergeInsertionVec();
        std::deque<int>    mergeInsertionDq();
        void    run();
        
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
