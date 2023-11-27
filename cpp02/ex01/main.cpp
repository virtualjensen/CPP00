/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:06:35 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/23 19:08:11 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    
    a = Fixed(1234.4321f);
    
    std::cout<<"ais" << a<<std::endl;
    std::cout<<"bis" << b<<std::endl;
    std::cout<<"cis" << c<<std::endl;
    std::cout<<"dis" << d<<std::endl;
    std::cout<<"ais" << a.toInt()<< "asinteger"<<std::endl;
    std::cout<<"bis" << b.toInt()<< "asinteger"<<std::endl;
    std::cout<<"cis" << c.toInt()<< "asinteger"<<std::endl;
    std::cout<<"dis" << d.toInt()<< "asinteger"<<std::endl;
    return 0;
    }