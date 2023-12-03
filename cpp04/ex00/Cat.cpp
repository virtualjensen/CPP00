/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:08:53 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 17:42:41 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    type = "Cat";
    std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy){
    type = copy.type;
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
    if (this != &copy){
        this->type = copy.type;
    }
    std::cout << "Cat copy assignment operator called." << std::endl;
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called." << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "*Meoooooow meoooow*" << std::endl;
}