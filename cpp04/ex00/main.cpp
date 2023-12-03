/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:31:48 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 17:20:59 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Animal.hpp"
#include    "Cat.hpp"
#include    "Dog.hpp"
#include    "WrongAnimal.hpp"
#include    "WrongCat.hpp"

int main(){
    const Animal *meta= new Animal();
    const Animal *j= new Dog();
    const Animal *i= new Cat();
    
    std::cout << j->getType() << "" << std::endl;
    std::cout << i->getType() << "" << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    std::cout << std::endl;

    std::cout << "WrongAnimal class and WrongCat class" << std::endl;
    const WrongAnimal *a = new WrongAnimal();
    const WrongAnimal *c = new WrongCat();
    
    std::cout << a->getType() << "" << std::endl;
    std::cout << c->getType() << "" << std::endl;
    a->makeSound(); // will output the cat sound!
    c->makeSound();

    delete a;
    delete c;
    std::cout << std::endl;

    return 0;
}