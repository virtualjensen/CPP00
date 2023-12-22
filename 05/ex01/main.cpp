/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:48:41 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 20:44:36 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try{
		Bureaucrat omar = Bureaucrat("Omar", 69);
		Form form = Form("job offer", 50, 50);
		std::cout << omar << std::endl;
		std::cout << form << std::endl;
		
		omar.signForm(form);
		omar.signForm(form);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}