/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:32:24 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/01 18:25:17 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap constrcuted!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->getName()
        << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old){
    std::cout << "ScavTrap copy constrcuted!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    if (this != &copy)
    {
        this->setAttackDamage(copy.getAttackDamage());
        this->setHitPoints(copy.getHitPoints());
        this->setAttackDamage(copy.getEnergyPoints());
        this->setName(copy.getName());
    }
    std::cout << "ScavTrap copy assignemnt operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->getName()
        << " Destroyed!" << std::endl;
}

void    ScavTrap::attack(const std::string &target){
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0){
        std::cout << "ScavTrap " << this->getName() << " attacks " << target
            << ", causing " << this->getAttackDamage()
            << " points of damage!" << std::endl;
    }
    else
        this->noPointsMsg();
}