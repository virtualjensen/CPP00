/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:04:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/28 18:26:33 by jebucoy          ###   ########.fr       */
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
        Fixed &operator=(const Fixed &obj);

        int     getRawBits( void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &obj, const Fixed &f);

#endif