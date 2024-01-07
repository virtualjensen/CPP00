template <typename T> 
Array<T>::Array() : _elements(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n){
    this->_elements = new T[n];
    for (unsigned int i = 0; i < n; ++i){
        this->_elements[i] = T();
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy){
    if (this != &copy) {
        try{
            delete[] this->_elements;
        }
        catch (std::exception &e) {} 
        this->_size = copy._size;
        this->_elements = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; ++i) {
            this->_elements[i] = copy._elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::Array(const Array &copy) : _elements(NULL), _size(0){
    *this = copy;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= this->_size) {
        throw std::out_of_range("Array index out of bounds");
    }
    return this->_elements[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= this->_size) {
        throw std::out_of_range("Array index out of bounds");
    }
    return this->_elements[index];
}

template <typename T>
Array<T>::~Array(){
    delete[] this->_elements;
}

template <typename T>
unsigned int Array<T>::size() const{
    return this->_size;
}