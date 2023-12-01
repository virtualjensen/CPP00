/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/01 18:35:56 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap constructed!" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) : name(name){
	std::cout << "Claptrap " << this->getName() << " constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy){
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "ClapTrap copy constructed" << std::endl;
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->getName() << " Destroyed!" << std::endl;
}


std::string ClapTrap::getName() const{
	return(this->name);
}

int	ClapTrap::getHitPoints() const{
	return(this->hitPoints);
}

int ClapTrap::getEnergyPoints() const{
	return(this->energyPoints);
}

int ClapTrap::getAttackDamage() const{
	return(this->attackDamage);
}

void	ClapTrap::setName(std::string name){
	this->name = name;
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
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0){
		std::cout << "ClapTrap " << this->getName() << " attacks " << target
			<< ", causing " << this->getAttackDamage()
			<< " points of damage!" << std::endl;
	}
	else
		this->noPointsMsg();
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->setHitPoints(this->getHitPoints() - amount);
	std::cout << "ClapTrap " << this->name << " takes "
		<< amount << " points of damage! " << std::endl;
	if (this->getHitPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " ran out of hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0){
		this->setHitPoints(this->getHitPoints() + amount);
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ClapTrap " << this->name << " repaired itself with "
			<< amount << " hit points!" << std::endl;
	}
	else{
		this->noPointsMsg();
		return ;
	}
}

void ClapTrap::noPointsMsg(){
		if (this->getEnergyPoints() <= 0){
			std::cout << this->getName()
			<< " cannot take action because [Energy Point: " << this->getEnergyPoints()
			<< "]" << this->getEnergyPoints() << std::endl;
		}
		if (this->getHitPoints() <= 0){
			std::cout << this->getName() << " ran out of hit points" << std::endl;
		}
}
	