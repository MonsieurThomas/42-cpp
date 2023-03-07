/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:35:28 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 17:37:16 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"

int main()
{
    std::cout << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    
    delete i;
    delete j;
    
    std::cout << std::endl;
    std::cout << "Showing that the deep copy is working " << std::endl;
    std::cout << std::endl;
    
    Animal animal1("Brebis");
    Animal animal2 = animal1;
    
    animal1.setType("Vache");
    std::cout << "This is animal1 type = " << animal1.getType() << std::endl;
    std::cout << "This is animal2 type = " << animal2.getType() << std::endl;
        
    std::cout << std::endl;
    std::cout << "Showing that the brain tab is working " << std::endl;
    std::cout << std::endl;

    Cat cat;
    Brain *catbrain = cat.getBrain();
    
    for (int i = 0; i < 10; i++)
        catbrain->createIdeas("idea", i);
    for (int i = 0; i < 10; i++)
        std::cout << "Prouving a point : " << catbrain->getIdeas(i) << std::endl;
    
    
    std::cout << std::endl;
    std::cout << "Showing that the Animal tab is working " << std::endl;
    std::cout << std::endl;
    
    const Animal* tab[10];
    int a = 0;
    
    while (a < 10)
    {
        if (a < 5)
            tab[a] = new Dog();
        else
            tab[a] = new Cat();
        a++;
    }
    std::cout << std::endl;
    a = 0;
    while (a < 10)
        tab[a++]->makeSound();
    
    std::cout << std::endl;
    a = 0;
    while (a < 10)
    {
        delete tab[a];
        a++;
    }
    system("leaks Polymorphisme");

}