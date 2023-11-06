/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:26:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/06 17:13:40 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(){
	bool	run;

	run = true;
	while(run){
		std::cout << "-----PHONEBOOK-----" << std::endl;
		std::cout << "       MENU:      " << std::endl;
		std::cout << "[ADD] : add a contact" << std::endl;
		std::cout << "[SEARCH] : search for a contact" << std::endl;
		std::cout << "[EXIT] : exit the program" << std::endl;
	}
}