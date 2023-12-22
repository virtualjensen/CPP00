/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:35:18 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/01 20:05:31 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap constructed!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap " << this->getName() << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
    std::cout << "FragTrap copy constructed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
    if (this != &copy){
        this->setName(copy.getName());
        this->setHitPoints(copy.getHitPoints());
        this->setEnergyPoints(copy.getEnergyPoints());
        this->setAttackDamage(copy.getAttackDamage());
    }
    std::cout << "FragTrap copy assignment operator invoked" << std::endl;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->getName() << " Destroyed!" << std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->getName()
    << " has requested positive high fives!" << std::endl;
}