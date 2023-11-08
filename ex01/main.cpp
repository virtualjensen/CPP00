/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/08 15:12:00 by jebucoy          ###   ########.fr       */
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
	option = "ADD";
	while(1){
		if (option != "ADD" && option != "SEARCH" && option != "EXIT"){
			std::cerr << "Invalid input, try again.\n";
			option = "ADD";
		}
		else{
			std::cout << "-----PHONEBOOK-----" << std::endl;
			std::cout << "       MENU:      " << std::endl;
			std::cout << "[ADD] : add a contact" << std::endl;
			std::cout << "[SEARCH] : search for a contact" << std::endl;
			std::cout << "[EXIT] : exit the program" << std::endl;
			std::cout << "Enter an option: ";
			std::getline(std::cin, option);
			// if (option.empty())
			// 	return (1);
			if (option == "ADD")
				pb.addContact();
			if (option == "SEARCH")
				pb.searchContact();
			if (option == "EXIT"){
				std::cout << "Exiting Phonebook\n";
				return (0);
			}
		}
	}
}