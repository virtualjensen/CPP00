/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:12:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 21:14:41 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class AForm{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
    protected:
        void    setIsSigned(bool isSigned);
	public:
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExec);
		AForm(const AForm&);
		AForm &operator=(const AForm&);
		~AForm();

		const std::string 	getName() const;
		bool 				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		
		void	beSigned(const Bureaucrat&);

        virtual void    execute(Bureaucrat const & executor) const  = 0;
		class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Grade too high";
            }
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Grade too low";
            }
        };
        class FormAlreadySigned : public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Form already signed";
            }
        };
        class FormNotSigned : public std::exception
        {
            virtual const char *what() const throw()
            {
                return "Form not signed";
            }
        };
	
};

std::ostream &operator<<(std::ostream&, const AForm&);


#endif