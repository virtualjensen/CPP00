/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:44:31 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 21:32:52 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	AForm(target, 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) :
	AForm(copy){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& copy){
	if (this != &copy)	
		this->setIsSigned(copy.getSign()); 
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (getSign() == false)
		throw FormNotSigned();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}