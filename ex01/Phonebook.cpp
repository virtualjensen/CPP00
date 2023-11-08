/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:55:09 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/08 15:14:52 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	count = 0;
}

void	displayContactHeader(){
	std::cout << "----------------------------------"
}

void	Phonebook::searchContact(){
	
}

void	Phonebook::addContact(){
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string darkSecret;

	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	if (firstName.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again.\n";
		return ;
	}
	contactList[count].setFirstName(firstName);
	
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	if (lastName.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again.\n";
		return ;
	}
	contactList[count].setLastName(lastName);

	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	if (nickName.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again.\n";
		return ;
	}
	contactList[count].setNickName(nickName);	
	
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNum);
	if (phoneNum.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again.\n";
		return ;
	}
	contactList[count].setPhoneNum(phoneNum);	
	
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkSecret);
	if (darkSecret.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again.\n";
		return ;
	}
	contactList[count].setDarkSecret(darkSecret);
	count++;
	if (count > 7)
		count = 0;
}