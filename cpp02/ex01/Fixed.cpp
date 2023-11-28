/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:06:17 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/28 14:15:40 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVal(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : fixedPointVal(f.getRawBits()){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num){
    this->setRawBits(num << this->fractionalBits);
}

Fixed::Fixed(const float num){
    this->setRawBits(num * (1 << this->fractionalBits));
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &Fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &Fixed){
        this->fixedPointVal = Fixed.getRawBits();
    }
    return (*this);
}

int Fixed::toInt(void) const{
    std::cout << "Int constructor callled" << std::endl;
    return (roundf(this->getRawBits() >> this->fractionalBits));
}

float   Fixed::toFloat(void) const{
    std::cout << "Float constructor callled" << std::endl;
    return ((float)this->getRawBits() / (1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointVal);
}

void Fixed::setRawBits(int const raw){
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointVal = raw;
}

std::ostream &operator<<(std::ostream &obj, const Fixed f){
    obj << f.toFloat();
    return (obj);
}