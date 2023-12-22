/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:48:41 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 21:07:03 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    
    Intern intern;
    AForm *form1 = intern.makeForm("shrubbery creation", "mahrin");
    AForm *form2 = intern.makeForm("robotomy request", "me");
    AForm *form3 = intern.makeForm("presidential pardon", "oamr");
    Bureaucrat b = Bureaucrat("ceo", 13);
    try{

        std::cout << std::endl;
        b.signForm(*form1);
        form1->execute(b);

        std::cout << std::endl;
        b.signForm(*form2);
        form2->execute(b);
        
        std::cout << std::endl;
        b.signForm(*form3);
        form3->execute(b);
        std::cout << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    delete form1;
    delete form2;
    delete form3;
}