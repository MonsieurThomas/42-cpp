#include "Zombie.hpp"


Zombie::Zombie(std::string input) : _name(input)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " got destructed in the destructor" << std::endl;
}

void  Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}