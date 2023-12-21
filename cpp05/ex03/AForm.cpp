/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:25:57 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 21:05:03 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"),
	_isSigned(false), _gradeToSign(150), _gradeToExec(150){
		if (_gradeToExec > 150 || _gradeToSign > 150)
			throw GradeTooLowException();
		if (_gradeToExec < 1 || _gradeToSign < 1)
			throw GradeTooHighException();
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec) : 
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
	if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	*this = copy;
}

AForm &AForm::operator=(const AForm &copy){
	if (this != &copy)
		_isSigned = copy._isSigned;
	return (*this);
}

AForm::~AForm(){}

const std::string AForm::getName() const {
	return (this->_name);
}

bool AForm::getSign() const {
	return (this->_isSigned);
}

int AForm::getSignGrade() const {
	return (this->_gradeToSign);
}

int AForm::getExecGrade() const {
	return (this->_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat& b) {
	if (this->_isSigned == true)
		throw FormAlreadySigned();
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else if (b.getGrade() <= _gradeToSign)
		this->_isSigned = true;
}

void	AForm::setIsSigned(bool isSigned){
	this->_isSigned = isSigned;
}

std::ostream &operator<<(std::ostream& os, const AForm& f){
	os << "Name: " << f.getName() << std::endl;
	os << "Sign: " << f.getSign() << std::endl;
	os << "Grade to Sign: " << f.getSignGrade() << std::endl;
	os << "Grade to Execute: " << f.getExecGrade() << std::endl;
	return (os);
}

