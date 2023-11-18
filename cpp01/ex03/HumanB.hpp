/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 06:13:07 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/18 06:38:10 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon *weapon);
        void    attack();
        void    setWeapon(Weapon &weapon);
};

#endif