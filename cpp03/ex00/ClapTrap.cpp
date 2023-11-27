/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:48:00 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/27 12:05:56 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){} // default constructor

ClapTrap::ClapTrap(std::string name) : Name(name){} // parameterized constructor

ClapTrap& ClapTrap::operator=(const ClapTrap &copy) : () {}

ClapTrap::~ClapTrap(){} // default destructor