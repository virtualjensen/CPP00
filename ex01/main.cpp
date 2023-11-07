/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/07 17:56:46 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string>

int main(){
	// bool		run;
	Phonebook	pb;
	std::string	option;

	// run = true;
	// option = NULL;
	while(1){
		std::cout << "-----PHONEBOOK-----" << std::endl;
		std::cout << "       MENU:      " << std::endl;
		std::cout << "[ADD] : add a contact" << std::endl;
		std::cout << "[SEARCH] : search for a contact" << std::endl;
		std::cout << "[EXIT] : exit the program" << std::endl;
		std::cout << "Enter an option: ";
		std::getline(std::cin, option);
		// if (option.empty())
		// 	return (1);
		if (option == "add")
			pb.addContact();
		if (option == "exit"){
			std::cout << "Exiting Phonebook\n";
			return (0);
		}
	}
}