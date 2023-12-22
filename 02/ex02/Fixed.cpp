/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:06:17 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/29 01:12:59 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointVal(0){
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : fixedPointVal(f.getRawBits()){
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num){
    // std::cout << "Int constructor callled" << std::endl;
    this->setRawBits(num << this->fractionalBits);
}

Fixed::Fixed(const float num){
    // std::cout << "Float constructor callled" << std::endl;
    this->setRawBits(roundf(num * (1 << this->fractionalBits)));
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &a){
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &a){
        this->fixedPointVal = a.getRawBits();
    }
    return (*this);
}

int Fixed::toInt(void) const{
    return (roundf(this->getRawBits() >> this->fractionalBits));
}

float   Fixed::toFloat(void) const{
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

std::ostream &operator<<(std::ostream &os, const Fixed &f){
    os << f.toFloat();
    return (os);
}

bool Fixed::operator==(const Fixed& a) const{
    return(this->toFloat() == a.toFloat());
}

bool Fixed::operator>(const Fixed& a) const{
    return(this->toFloat() > a.toFloat());
}

bool Fixed::operator<(const Fixed& a) const{
    return(this->toFloat() < a.toFloat());
}

bool Fixed::operator!=(const Fixed& a) const{
    return(this->toFloat() != a.toFloat());
}

bool Fixed::operator>=(const Fixed& a) const{
    return(this->toFloat() >= a.toFloat());
}

bool Fixed::operator<=(const Fixed& a) const{
    return(this->toFloat() <= a.toFloat());
}

Fixed   Fixed::operator+(const Fixed &a) const{
    const float add = this->toFloat() + a.toFloat();
    Fixed   res = add;
    return (res);
}

Fixed   Fixed::operator-(const Fixed &a) const{
    const float sub = this->toFloat() - a.toFloat();
    Fixed   res = sub;
    return (res);
}

Fixed   Fixed::operator*(const Fixed &a) const{
    const float multi = this->toFloat() * a.toFloat();
    Fixed   res = multi;
    return (res);
}
Fixed   Fixed::operator/(const Fixed &a) const{
    if(this->toFloat() <= 0)
        return((Fixed)0);
    const float div = this->toFloat() / a.toFloat();
    Fixed   res = div;
    return (res);
}

// pre-increment
Fixed   &Fixed::operator++(){
    ++this->fixedPointVal;
    return (*this);
}

// pre-decrement
Fixed   &Fixed::operator--(){
    --this->fixedPointVal;
    return (*this);
}

// post-increment
Fixed Fixed::operator++(int){
	Fixed inc = *this;
    fixedPointVal++;
	return (inc);
}

// post-decrement
Fixed Fixed::operator--(int){
	Fixed inc = *this;
    fixedPointVal--;
	return (inc);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    if (a > b)
        return (a);
    return (b);
}
