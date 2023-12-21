/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:01:47 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 19:52:45 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	private:
		AForm* _makeShrubberyCreation(const std::string &target);
		AForm* _makeRobotomyRequest(const std::string &target);
		AForm* _makePresidentialPardon(const std::string &target);
	public:
		Intern();
		Intern(const Intern&);
		Intern &operator=(const Intern&);
		~Intern();

		AForm* makeForm(const std::string &name, const std::string &target);
		 class NoFormException: public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Intern couldn't find form";
            }
        };
};

#endif