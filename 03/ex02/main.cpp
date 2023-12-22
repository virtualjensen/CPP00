/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:07:27 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/01 20:20:24 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main(){
    FragTrap    imaad("imaad");
    FragTrap    hassan("hassan");

    imaad.attack("hassan");
    hassan.takeDamage(imaad.getAttackDamage());
    hassan.attack("imaad");
    imaad.takeDamage(hassan.getAttackDamage());
    hassan.highFivesGuys();
    imaad.highFivesGuys();
}