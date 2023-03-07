/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:35:28 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 17:12:32 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"


void    WrongAnimalFunc()
{
    std::cout << std::endl;
    std::cout << "We Are Now In Wrong Animal Func" << std::endl;
    std::cout << std::endl;
    
    std::cout << std::endl;
    const WrongAnimal* a = new WrongAnimal;
    const WrongAnimal* b = new WrongCat;
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << a->getType() << std::endl;
    std::cout << b->getType() << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    a->makeSound();
    b->makeSound();
    std::cout << std::endl;
    delete a;
    delete b;
}

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl; 
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl; 
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl; 

    delete meta;
    delete i;
    delete j;
    
    WrongAnimalFunc();
    system("leaks Polymorphisme");
}