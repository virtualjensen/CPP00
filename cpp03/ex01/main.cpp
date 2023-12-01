/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:59:02 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/01 20:20:50 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap mehrin("mehrin");
    ScavTrap omar("omar");
    mehrin.attack("omar");
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar");
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar");
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar");
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar");
    omar.takeDamage(mehrin.getAttackDamage());
    std::cout << "omars hit points: " << omar.getHitPoints() << std::endl; 
    omar.attack("mehrin");

    omar.guardGate();
}