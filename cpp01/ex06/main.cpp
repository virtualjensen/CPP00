/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:01:55 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/19 18:14:19 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	Harl	h;
	
	if (ac != 2){
		std::cerr << "./Harl *level*" << std::endl;
		return (1);
	}
	h.complain(av[1]);
	return (0);

	
}