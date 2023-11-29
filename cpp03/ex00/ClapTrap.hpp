/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:47:09 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/29 18:57:06 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap(const ClapTrap &old);
		ClapTrap& operator=(const ClapTrap &old);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string getName();
		int	getHitPoints();
		int getEnergyPoints();
		int	getAttackDamage();
		void setHitPoints(int val);
		void setEnergyPoints(int val);
		void setAttackDamage(int val);
};

#endif