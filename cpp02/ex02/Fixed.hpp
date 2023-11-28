/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:07:56 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/28 14:09:14 by jebucoy          ###   ########.fr       */
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
        Fixed &operator=(const Fixed &Fixed);

        int     getRawBits( void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &obj, const Fixed f){
    obj << f.toFloat();
    return (obj);
}

#endif