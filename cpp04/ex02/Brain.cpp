/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:36:02 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 18:41:34 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++){
        this->ideas[i] = "some random idea...";
    }
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &copy){
    this->ideas = NULL;
    *this = copy;
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &copy){
    if(this->ideas)
        delete[] ideas;
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++){
        this->ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain copy assignment operator called." << std::endl;
    return (*this);
}

Brain::~Brain(){
    if (this->ideas)
        delete[] (this->ideas);
    std::cout << "Brain destructor called." << std::endl;
}