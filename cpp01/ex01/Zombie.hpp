/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:24:29 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/13 21:24:31 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		
		void	announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif