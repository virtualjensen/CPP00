/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:48:41 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 13:54:55 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat mehrin = Bureaucrat("Mehrin", 2);
		std::cout << mehrin << std::endl;
		mehrin.incrementGrade();
		std::cout << mehrin << std::endl;
		Bureaucrat omar = Bureaucrat("Omar", 150);
		std::cout << omar << std::endl;
		omar.decrementGrade();
		std::cout << omar << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}