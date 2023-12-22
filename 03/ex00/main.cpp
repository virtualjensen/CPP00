/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:53:08 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/30 12:55:50 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap omar("omar");
    ClapTrap mehrin("mehrin");
    omar.setEnergyPoints(3);
    omar.setAttackDamage(69);
    omar.setHitPoints(420);
    
    mehrin.setEnergyPoints(3);
    mehrin.setAttackDamage(96);
    mehrin.setHitPoints(666);
    
    omar.attack("mehrin");
    mehrin.takeDamage(omar.getAttackDamage());
    mehrin.attack("omar");
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.beRepaired(100);  
    mehrin.attack("omar"); 
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar"); 
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar"); 
    omar.takeDamage(mehrin.getAttackDamage());
    mehrin.attack("omar"); 
    omar.takeDamage(mehrin.getAttackDamage());
    omar.attack("mehrin");
}