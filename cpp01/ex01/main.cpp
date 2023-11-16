/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:28:56 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/16 15:37:34 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie	*horde;
	int	zombieNum = 5;
	horde = zombieHorde(zombieNum, "Penny");
	if (!horde)
		return (1);
	for (int i = 0; i < zombieNum; i++){
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}