/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:16:55 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/20 13:28:07 by jebucoy          ###   ########.fr       */
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
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat&);
        Bureaucrat &operator=(const Bureaucrat&);
        ~Bureaucrat();
        
        int    getGrade() const;
        const std::string getName() const;

        void incrementGrade();
        void decrementGrade();
        
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