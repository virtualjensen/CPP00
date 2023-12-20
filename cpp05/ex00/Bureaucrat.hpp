/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:16:55 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 12:55:47 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private:
        std::string const _name;
        int _grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat&);
        Bureaucrat &operator=(const Bureaucrat&);
        ~Bureaucrat();
        
        int    getGrade() const;
        std::string getName() const;
        
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw()
            {
                return "Bureaucrat grade too high";
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw()
            {
                return "Bureaucrat grade too low";
            }
        };
    
};

std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif