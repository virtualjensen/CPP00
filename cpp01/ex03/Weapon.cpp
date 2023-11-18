/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:55:38 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/18 02:59:28 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType(){
    return (this->type);
}

void    Weapon::setType(std::string type){
    this->type = type;
}

Weapon::Weapon(std::string type){
    this->setType(type);
}