#include <iostream>
#include "Zombie.hpp"

int main()
{
    //Zombie zombie("name");

    std::cout << std::endl;
    std::cout << "Creating and deleting zombie" << std::endl;
    randomChump("Joe");

    std::cout << std::endl;
    std::cout << "Creating a zombie that live" << std::endl;
    Zombie *zombie = newZombie("abc");

    std::cout << std::endl;
    std::cout << "Announce of the zombie that live" << std::endl;
    zombie->announce();

    std::cout << std::endl;
    std::cout << "Desctructing manually the zombie that live" << std::endl;
    delete zombie;
    std::cout << std::endl;

}