/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:12:39 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 20:12:55 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& copy){
	*this = copy;
}

Intern &Intern::operator=(const Intern& copy){
	(void)copy;
	return (*this);
}

Intern::~Intern(){}

AForm* Intern::_makeShrubberyCreation(const std::string &target){
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::_makeRobotomyRequest(const std::string &target){
	return (new RobotomyRequestForm(target));
}

AForm* Intern::_makePresidentialPardon(const std::string &target){
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string &name, const std::string &target){
	std::string formType[3] = {"shrubbery creation", "robotomy request",
	 	"presidential pardon"};
	AForm *(Intern::*func[3])(const std::string &target) =
		{&Intern::_makeShrubberyCreation, &Intern::_makeRobotomyRequest,
			&Intern::_makePresidentialPardon};
	for (int i = 0; i < 3; i++){
		if (formType[i] == name){
			std::cout << "Intern creates " << formType[i] << std::endl;
			return (this->*func[i])(target);
		}
	}
	std::cout << "Intern couldn't find " << name << std::endl;
	return (NULL);
}