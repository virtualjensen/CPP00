/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:53:06 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/23 16:08:17 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed a;
    Fixed b(a);
    Fixed c; 
    c = b; 
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout<< c.getRawBits() << std::endl;
    
    return 0;
}

// output should be:

// Default constructor called 
// Copy constructor called
// Copy assignment operator called /*<--This line may be missing depending on your implementation */
// getRawBits member function called
// Default constructor called
// Copy assignment operator called
// getRawBits member function called
// getRawBits memberfunction called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called