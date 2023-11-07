/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:22:26 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/07 17:55:42 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

#include <iostream>
#include <sstream>

class Phonebook{
	private:
		Contact contactList[8];
		int		count;
	public:
		Phonebook();	
		void	addContact();
		void	searchContact();
		void	exitProgram();
};

#endif






