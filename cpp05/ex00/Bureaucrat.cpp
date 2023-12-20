/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:53:52 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/19 20:23:19 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    
}

int Bureaucrat::getGrade() const{
    return (this->_grade);
}

std::string Bureaucrat::getName() const{
    return (this->_name);
}

Bureaucrat::GradeTooHighException{
    
}
