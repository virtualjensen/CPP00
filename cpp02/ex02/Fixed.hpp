/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:04:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/29 00:59:50 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class   Fixed{
    private:
        int fixedPointVal;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(const int num);
        Fixed(const float num);
        ~Fixed();
        Fixed &operator=(const Fixed &a);
        bool operator==(const Fixed &a) const;
        bool operator!=(const Fixed &a) const;
        bool operator>(const Fixed &a) const;
        bool operator<(const Fixed &a) const;
        bool operator>=(const Fixed &a) const;
        bool operator<=(const Fixed &a) const;
        Fixed operator+(const Fixed &a) const;
        Fixed operator-(const Fixed &a) const;
        Fixed operator*(const Fixed &a) const;
        Fixed operator/(const Fixed &a) const;
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        int     getRawBits( void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &obj, const Fixed &f);

#endif