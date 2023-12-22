/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:10:50 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/13 20:16:27 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria{
	protected:
	
	public:
	AMateria(std:string const &);
	AMateria();
	AMateria(const Materia &);
	AMateria &operator=(const Materia &);
	~AMateria();

	std::string const getType() const;

	virtual AMateria *clone() const = 0;
	virtual void	use(ICharacter &target); 
};

#endif