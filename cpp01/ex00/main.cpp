/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:04:04 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/13 21:04:07 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie z("stack");
	Zombie	*one = newZombie("mehrin");
	one->announce();
	Zombie	*two = newZombie("jensen");
	two->announce();
	Zombie	*three = newZombie("blurg");
	three->announce();
	randomChump("bobby");
	randomChump("chad");
	delete one;
	delete two;
	delete three;
}