/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:23:40 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 20:54:57 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
	if (this != &copy){
		this->setIsSigned(getSign());
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getSign() == false)
		throw FormNotSigned();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	std::cout << "******DRILLING NOISE******" << std::endl;
	std::srand((unsigned int)(time(NULL)));
	if (std::rand() % 2 == 0){
		std::cout << executor.getName() << " has been robotomized 50% of the time"
			<< std::endl;
	}
	else
		std::cout << executor.getName() << " failed to get robotomized" << std::endl;
}