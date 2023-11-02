/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:26:34 by jebucoy           #+#    #+#             */
/*   Updated: 2023/11/02 13:48:19 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	char	convert;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int s = 1; s < ac; s++){ 
		for(size_t i = 0; i < strlen(av[s]); i++){
			convert = toupper(av[s][i]);

			std::cout << convert;
		}
		if (s + 1 != ac)
			std::cout << " ";
	}
}