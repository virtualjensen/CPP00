#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template <typename T> class MutantStack : public std::stack<T>{
    private:
        using std::stack<T>::c;
    public:
        MutantStack();
        MutantStack &operator=(const MutantStack&);
        MutantStack(const MutantStack&);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        iterator begin() {return c.begin();}
        iterator end() {return c.end();}
};

#include "MutantStack.tpp"

#endif