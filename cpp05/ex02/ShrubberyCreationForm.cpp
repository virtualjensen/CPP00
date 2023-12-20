/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:19:48 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 22:38:56 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery Creation Form", 145, 137){};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
	if (this != &copy)
		this->setIsSigned(getSign());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (getSign() == false)
		throw FormNotSigned();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	std::string filename = executor.getName();
	std::ofstream outfile(filename + "_shrubbery");

	outfile << ASCII_TREE << std::endl;
}