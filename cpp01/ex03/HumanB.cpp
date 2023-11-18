/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 06:27:10 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/18 06:41:51 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(){
    if (this->weapon == NULL)
        std::cout << this->name << " attacks unarmed" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name){
    this->name = name;
}

HumanB::HumanB(std::string name, Weapon *weapon){
    this->name = name;
    this->weapon = weapon;
}