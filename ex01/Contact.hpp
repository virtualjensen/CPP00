/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:27:18 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/06 16:10:52 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
	private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNum;
	std::string	darkSecret;
	public:
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setPhoneNum(std::string phoneNum);
	void setDarkSecret(std::string darkSecret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNum();
	std::string getDarkSecret();
};

#endif
