/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebucoy <jebucoy@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:31:48 by jebucoy           #+#    #+#             */
/*   Updated: 2023/12/03 18:51:48 by jebucoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Animal.hpp"
#include    "Cat.hpp"
#include    "Dog.hpp"
#include    "WrongAnimal.hpp"
#include    "WrongCat.hpp"

int main(){
    Animal *objects[10];
    for (int d = 0; d < 5; d++){
        objects[d] = new Dog();
    }
    
    std::cout << std::endl;
    for (int c = 5; c < 10; c++){
        objects[c] = new Cat();
    }
    
    std::cout << std::endl;
        for (int i = 0; i < 10; i++){
            delete (objects[i]);
        }
    
    std::cout << std::endl;
    std::cout << "Deep copy test" << std::endl;
    Dog *test = new Dog();
    Dog *deep = new Dog(*test);
    delete (test);
    delete (deep);
    
    return 0;
}