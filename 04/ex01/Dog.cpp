/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:16:55 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 18:37:31 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy){
    brain = new Brain(*copy.brain);
    type = copy.type;
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy){
        this->type = copy.type;
        this->brain = copy.brain;
    }
    std::cout << "Dog copy assignment operator called." << std::endl;
    return (*this);
}

Dog::~Dog(){
    if (this->brain)
        delete brain;
    std::cout << "Dog destructor called." << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "*Woof woof*" << std::endl;
}