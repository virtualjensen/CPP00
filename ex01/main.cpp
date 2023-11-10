/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/10 14:42:36 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string>

int main(){
	bool		run;
	Phonebook	pb;
	std::string	option;

	run = true;
	option = "ADD";
	while(run){
		if (option != "ADD" && option != "SEARCH" && option != "EXIT"){
			std::cerr << "Invalid input, try again." << std::endl;
			option = "ADD";
		}
		else{
			std::cout << "   -----PHONEBOOK-----" << std::endl << std::endl;
			std::cout << "what would you like to do?" <<std::endl;
			std::cout << "[ADD]    : add a contact" << std::endl;
			std::cout << "[SEARCH] : search for a contact" << std::endl;
			std::cout << "[EXIT]   : exit the program" << std::endl;
			std::cout << "Enter an option: ";
			std::getline(std::cin, option);
			std::cout << "\033c";
			if (!std::cin)
				run = false;
			if (option == "ADD")
				pb.addContact();
			if (option == "SEARCH")
				pb.displayContactList();
			if (option == "EXIT"){
				std::cout << "Exiting Phonebook..." << std::endl;
				run = false;
			}
		}
	}
	return (0);
}