/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:22:26 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/09 19:16:38 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class Phonebook{
	private:
		Contact contactList[8];
		int		count;
	public:
		Phonebook();	
		void	addContact();
		void	displayContactList();
		void	exitProgram();
		void	displayContactHeader();
		void	searchContact();
};

#endif






