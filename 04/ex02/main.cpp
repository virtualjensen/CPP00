/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:31:48 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 19:05:35 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Animal.hpp"
#include    "Cat.hpp"
#include    "Dog.hpp"
#include    "WrongAnimal.hpp"
#include    "WrongCat.hpp"

int main(){
    // const Animal *meta= new Animal();
    const Animal *j= new Dog();
    const Animal *i= new Cat();
    
    std::cout << j->getType() << "" << std::endl;
    std::cout << i->getType() << "" << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    // meta->makeSound();
    // delete meta;
    delete i;
    delete j;

    return 0;
}
