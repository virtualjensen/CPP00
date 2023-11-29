/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/29 19:52:58 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name){
	std::cout << "Claptrap string constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &old){
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &old)
	{
		this->name = old.name;
		this->hitPoints = old.hitPoints;
		this->energyPoints = old.energyPoints;
		this->attackDamage = old.attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

ClapTrap::~ClapTrap(){
}


std::string ClapTrap::getName(){
	return(this->name);
}

int	ClapTrap::getHitPoints(){
	return(this->hitPoints);
}

int ClapTrap::getEnergyPoints(){
	return(this->energyPoints);
}

int ClapTrap::getAttackDamage(){
	return(this->attackDamage);
}

void	ClapTrap::setHitPoints(int val){
	this->hitPoints = val;
}

void	ClapTrap::setEnergyPoints(int val){
	this->energyPoints = val;
}

void	ClapTrap::setAttackDamage(int val){
	this->attackDamage = val;
}

void	ClapTrap::attack(const std::string &target){
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->getName() << " attacks " << target
		<< " ,causing " << this->getAttackDamage()
		<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->setHitPoints(this->getHitPoints() - amount);
	std::cout << "ClapTrap " << this->name << " takes "
		<< amount << " points of damage! " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	this->setHitPoints(this->getHitPoints() + amount);
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->name << " repaired itself with "
		<< amount << " hit points!" << std::endl;
}