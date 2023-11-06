/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:27:04 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/06 16:10:49 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

std::string	Contact::getFirstName(){
	return (this->firstName);
}

void	Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

std::string Contact::getLastName(){
	return(this->lastName);
}

void	Contact::setNickName(std::string nickName){
	this->nickName = nickName;
}

std::string	Contact::getNickName(){
	return(this->nickName);
}

void	Contact::setPhoneNum(std::string phoneNum){
	this->phoneNum = phoneNum;
}

std::string	Contact::getPhoneNum(){
	return(this->phoneNum);
}

void	Contact::setDarkSecret(std::string darkSecret){
	this->darkSecret = darkSecret;
}

std::string	Contact::getDarkSecret(){
	return (this->darkSecret);
}