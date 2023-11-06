/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:55:09 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/06 20:43:51 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::addContact(){
	contactList[count].setFirstName();
	contactList[count].setLastName();
	contactList[count].setNickName();	
	contactList[count].setPhoneNum();	
	contactList[count].setDarkSecret();
		
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	// std::cout << "\033[2J";
	
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	// std::cout << "\033[2J";
	
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	// std::cout << "\033[2J";
	
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNum);
	// std::cout << "\033[2J";
	
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkSecret);
	// std::cout << "\033[2J";
	count++;
}