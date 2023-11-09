/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:27:04 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/09 20:34:43 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//check if strlen > 10, if so substr(0, 9) and add . at the end.
void	Contact::truncateString(std::string input){

}

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