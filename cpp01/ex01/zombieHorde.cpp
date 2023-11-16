/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:24:54 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/16 15:33:24 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name){
	
	if (N <= 0){
		std::cerr << "Input must be greater than 0" << std::endl;
		return (NULL);
	}

	Zombie	*horde = new Zombie[N];
	for(int	i = 0; i < N; i++){
		horde[i].zombieName(name);
	}
	return (horde);
}
