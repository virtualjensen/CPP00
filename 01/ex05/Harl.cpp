/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:43:15 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/19 18:49:28 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void	Harl::debug(void){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my "
	"7XL-double-cheese-triple-pickle-special- ketchup"
	" burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You didn’t put enough bacon in my burger! "
	"If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I’ve been coming for years whereas you "
	"started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! "
	"I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	void	(Harl::*complains[])() =
			{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	std::string cmds[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++){
		if (level == cmds[i])
			(this->*(complains[i]))();	
	}
}