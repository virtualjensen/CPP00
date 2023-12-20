/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:12:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 19:37:07 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		Form(const Form&);
		Form &operator=(const Form&);
		~Form();

		const std::string 	getName() const;
		bool 				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		
		void	beSigned(const Bureaucrat&);
		class GradeTooHighException : public std::exception
        {
            const char *what() const throw()
            {
                return "Grade too high";
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw()
            {
                return "Grade too low";
            }
        };
        class FormAlreadySigned : public std::exception
        {
            const char *what() const throw()
            {
                return "Form already signed";
            }
        };
	
};

std::ostream &operator<<(std::ostream&, const Form&);


#endif