/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:48:41 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 19:40:50 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try{
		Bureaucrat omar = Bureaucrat("Omar", 49);
		Form form = Form("child support", 50, 50);
		std::cout << omar;
		std::cout << form;
		
		omar.signForm(form);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}