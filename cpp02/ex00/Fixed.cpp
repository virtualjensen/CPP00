#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVal(0){
    std::cout << "Default constructor called" << std::endl;
} // Default Constructor

Fixed::Fixed(const Fixed &f) : fixedPointVal(f.getRawBits()){
    std::cout << "Copy constructor called" << std::endl;
} // Copy Constructor

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
} // Destructor

Fixed& Fixed::operator=(const Fixed &Fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointVal = Fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointVal);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointVal = raw;
}