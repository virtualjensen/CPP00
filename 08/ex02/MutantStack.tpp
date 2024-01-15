template <typename T>
MutantStack<T>::MutantStack(){
    std::cout << "MutantStack constructor called." << std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy){
    if (*this != copy)
        c = copy.c;
    return *this;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy){
    *this = copy;
}

template <typename T>
MutantStack<T>::~MutantStack(){
    std::cout << "MutantStack destructor called." << std::endl;
}