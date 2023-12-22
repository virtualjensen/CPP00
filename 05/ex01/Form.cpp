/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:25:57 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/21 20:43:35 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"),
	_isSigned(false), _gradeToSign(150), _gradeToExec(150){
		if (_gradeToExec > 150 || _gradeToSign > 150)
			throw GradeTooLowException();
		if (_gradeToExec < 1 || _gradeToSign < 1)
			throw GradeTooHighException();
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : 
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
	if (_gradeToExec > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
	if (_gradeToExec < 1 || _gradeToSign < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	*this = copy;
}

Form &Form::operator=(const Form &copy){
	if (this != &copy)
		_isSigned = copy._isSigned;
	return (*this);
}

Form::~Form(){}

const std::string Form::getName() const {
	return (this->_name);
}

bool Form::getSign() const {
	return (this->_isSigned);
}

int Form::getSignGrade() const {
	return (this->_gradeToSign);
}

int Form::getExecGrade() const {
	return (this->_gradeToExec);
}

void	Form::beSigned(const Bureaucrat& b) {
	if (this->_isSigned == true)
		throw FormAlreadySigned();
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else if (b.getGrade() < _gradeToSign)
		this->_isSigned = true;
}

std::ostream &operator<<(std::ostream& os, const Form& f){
	os << "Name: " << f.getName() << std::endl;
	os << "Sign: " << f.getSign() << std::endl;
	os << "Grade to Sign: " << f.getSignGrade() << std::endl;
	os << "Grade to Execute: " << f.getExecGrade() << std::endl;
	return (os);
}

