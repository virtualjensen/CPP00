/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:04:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/23 19:05:29 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class   Fixed{
    private:
        int fixedPointVal;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed &operator=(const Fixed &Fixed);

        int getRawBits( void) const;
        void setRawBits(int const raw);
};

#endif