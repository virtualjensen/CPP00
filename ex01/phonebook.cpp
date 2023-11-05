/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:55:09 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/05 19:03:49 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::setContactFirstName(int index, std::string contactFirstName){
	this->contactList[index].setFirstName(contactFirstName); 
}

void	Phonebook::setContactLastName(int index, std::string contactLastName){
	this->contactList[index].setLastName(contactLastName);
}

void	Phonebook::setContactNickName(int index, std::string contactNickName){
	this->contactList[index].setNickName(contactNickName);
}

void	Phonebook::setContactPhoneNum(int index, std::string contactPhoneNum){
	this->contactList[index].setPhoneNum(contactPhoneNum);
}

void	Phonebook::setDarkSecret(int index, std::string contactDarkSecret){
	this->contactList[index].setDarkSecret(contactDarkSecret);
}

std::string	 Phonebook::getContactFirstName(){
	
}