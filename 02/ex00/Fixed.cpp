/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:06:02 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/29 15:13:13 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVal(0){
    std::cout << "Default constructor called" << std::endl;
} // Default Constructor

Fixed::Fixed(const Fixed &f){
    std::cout << "Copy constructor called" << std::endl;
    fixedPointVal = f.getRawBits();
} // Copy Constructor

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
} // Destructor

Fixed& Fixed::operator=(const Fixed &Fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &Fixed){
        this->fixedPointVal = Fixed.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointVal);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointVal = raw;
}

