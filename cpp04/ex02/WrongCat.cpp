/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:31:21 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 17:44:42 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    type = "WrongCat";
    std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    type = copy.type;
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    if (this != &copy){
        this->type = copy.type;
    }
    std::cout << "WrongCat copy assignment operator called." << std::endl;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "Cat destructor called." << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << "*Meoooooow meoooow*" << std::endl;
}