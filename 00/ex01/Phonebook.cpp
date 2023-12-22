/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:55:09 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/10 14:41:54 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	count = 0;
}

void	Phonebook::displayContactHeader(){
	std::cout << "\033c";
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << " LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Phonebook::displayContactList(){
	displayContactHeader();
	for (int i = 0; i < 8; i++){
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		if (this->contactList[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << this->contactList[i].getFirstName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << this->contactList[i].getFirstName().substr(0, 10) << "|";
			
		if (this->contactList[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << this->contactList[i].getLastName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << this->contactList[i].getLastName().substr(0, 10) << "|";
		
		if (this->contactList[i].getNickName().length() > 10)
			std::cout << std::setw(10) << this->contactList[i].getNickName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << this->contactList[i].getNickName().substr(0, 10) << "|";
		std::cout << std::endl;
	}
	searchContact();
}

void	Phonebook::searchContact(){
	std::stringstream ss;

	std::string	contactIdx;
	std::cout << "Who are you looking for? (enter index): ";
	std::getline(std::cin, contactIdx);
	ss << contactIdx;
	int	intIdx;
	ss >> intIdx;
	if (intIdx < 1 || intIdx > 8){
		std::cout << "\033c";
		std::cerr << "Out of range, try again" << std::endl;
		return ;
	}
	std::cout << "\033c";
	std::cout << "Index      : " << intIdx << std::endl;
	std::cout << "First Name : " << this->contactList[intIdx - 1].getFirstName() << std::endl;
	std::cout << "Last Name  : " << this->contactList[intIdx - 1].getLastName() << std::endl;
	std::cout << "Nickname   : " << this->contactList[intIdx - 1].getNickName() << std::endl;
	std::cout << "Phone #    : " << this->contactList[intIdx - 1].getPhoneNum() << std::endl;
	std::cout << "Secret     : " << this->contactList[intIdx - 1].getDarkSecret() << std::endl;
}

void	Phonebook::addContact(){
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string darkSecret;

	if (!std::cin)
		return ;
	std::cout << "First Name   : ";
	std::getline(std::cin, firstName);
	if (firstName.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again." << std::endl;
		return ;
	}
	
	std::cout << "Last Name    : ";
	std::getline(std::cin, lastName);
	if (lastName.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again." << std::endl;
		return ;
	}

	std::cout << "Nickname     : ";
	std::getline(std::cin, nickName);
	if (nickName.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again." << std::endl;
		return ;
	}
	
	std::cout << "Phone Number : ";
	std::getline(std::cin, phoneNum);
	if (phoneNum.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again." << std::endl;
		return ;
	}
	
	std::cout << "Dark Secret  : ";
	std::getline(std::cin, darkSecret);
	if (darkSecret.find_first_not_of("\t\n\v")){
		std::cerr << "\033[2J";
		std::cerr << "Can't have empty field. Try again." << std::endl;
		return ;
	}
	std::cout << std::endl;
	this->contactList[count % 8].setFirstName(firstName);
	this->contactList[count % 8].setLastName(lastName);
	this->contactList[count % 8].setNickName(nickName);	
	this->contactList[count % 8].setPhoneNum(phoneNum);
	this->contactList[count % 8].setDarkSecret(darkSecret);
	count++;
}