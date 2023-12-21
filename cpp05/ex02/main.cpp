/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:48:41 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 20:51:53 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    shrubberyCreationFormTests(void) {
    std::cout << "-----------------------------------------------" << std::endl;
    try {
        Bureaucrat            b("Basheer", 136);
        ShrubberyCreationForm form("Shrubbery Creation Form");

        std::cout << std::endl;
        std::cout << "-----FORM DETAILS-----" << std::endl;
        std::cout << form << std::endl;
        
        b.signForm(form);
        b.executeForm(form);
        
        std::cout << std::endl;
        
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;
}

void    robotomyRequestFormTests(void) {
    std::cout << "-----------------------------------------------" << std::endl;
    try {
        Bureaucrat          b("John", 42);
        RobotomyRequestForm form("Robotomy Request Form");

        std::cout << std::endl;
        std::cout << "-----FORM DETAILS-----" << std::endl;
        std::cout << form << std::endl;

        b.executeForm(form);
        std::cout << std::endl;

        try {
            form.beSigned(b);
        } catch (std::exception & e) {
            std::cout << "Signing form Failed " << e.what()  << std::endl;
        }
        
        b.incrementGrade();
        std::cout << b << std::endl;
        b.signForm(form);

        std::cout << std::endl;
        form.execute(b);
        std::cout << std::endl;
        
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;
}

void    presidentialPardonFormTests(void) {
    std::cout << "-----------------------------------------------" << std::endl;
    try {
        Bureaucrat              b("Pacman", 6);
        PresidentialPardonForm  form("Presidential Pardon Form");

        std::cout << std::endl;
        std::cout << form << std::endl;

        b.executeForm(form);

        try {
            form.beSigned(b);
        } catch (std::exception & e) {
            std::cout << "Signing form Failed " << e.what() << std::endl;
        }

        b.incrementGrade();
        std::cout << b << std::endl;
        b.signForm(form);

        std::cout << std::endl;
        form.execute(b);
        std::cout << std::endl;
        
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------------" << std::endl;
}


int main(void) {
    shrubberyCreationFormTests();
    robotomyRequestFormTests();
    presidentialPardonFormTests();
}