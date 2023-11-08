/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:55:09 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/08 16:33:02 by jebucoy          ###   ########.fr       */
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

void	Phonebook::searchContact(){
	displayContactHeader();
	for (int i = 0; i < this->count; i++){
		std::cout << "|";
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->contactList[i].getFirstName().substr(0, 10) << "|";
		std::cout << std::setw(10) << this->contactList[i].getLastName().substr(0, 10) << "|";
		std::cout << std::setw(10) << this->contactList[i].getNickName().substr(0, 10) << "|";
		std::cout << std::endl;
	}
	
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