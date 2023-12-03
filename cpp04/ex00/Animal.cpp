/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:36:56 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 16:14:46 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal"){
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &copy){
    type = copy.type;
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &copy){
    if (this != &copy){
        this->type = copy.type;
    }
    std::cout << "Animal copy assignment operator called." << std::endl;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal destructor called." << std::endl;
}

void    Animal::makeSound() const{
    std::cout << "*Panicked Animal Noises*" << std::endl;
}

