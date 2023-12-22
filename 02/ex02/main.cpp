/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:07:39 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/29 12:25:03 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << "a == b ? " << (a == b) << std::endl;
	std::cout << "a == b ? " << (a == Fixed(0)) << std::endl;
	std::cout << "a > b ? " << (a > b) << std::endl;
	std::cout << "a < b ? " << (a < b) << std::endl;
	std::cout << "a <= b ? " << (Fixed(42) <= Fixed(42.01f)) << std::endl;
	std::cout << "a >= b ? " << (a >= b) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "the max of " << a << " and " << b
		<< " is " << Fixed::max( a, b ) << std::endl;
	std::cout << "the min of " << a << " and " << b
		<< " is " << Fixed::min( a, b ) << std::endl;
	
	return 0;
}