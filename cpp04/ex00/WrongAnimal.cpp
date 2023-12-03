/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:23:38 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 16:26:56 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wronganimal"){
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    type = copy.type;
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
    if (this != &copy){
        this->type = copy.type;
    }
    std::cout << "WrongAnimal copy assignment operator called." << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called." << std::endl;
}

void    WrongAnimal::makeSound() const{
    std::cout << "*Panicked WrongAnimal Noises*" << std::endl;
}
