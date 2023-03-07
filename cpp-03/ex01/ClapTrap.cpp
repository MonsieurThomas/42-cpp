#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "We are in ClapTrap constructor, construction of standard ClapTrap " << std::endl;
    this->_hitPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
    this->_name = "Default";
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "We are in ClapTrap constructor, construction of " << name << std::endl;
    this->_hitPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &instance)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->_hitPoint = instance._hitPoint;
    this->_energyPoint = instance._energyPoint;
    this->_attackDamage = instance._attackDamage;
    this->_name = instance._name;
    return *this;
}

ClapTrap::~ClapTrap()
{
        std::cout << "We are in ClapTrap destructor, destruction of " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoint < 1)
    {
        std::cout << "Unfortunately " << this->_name << " has no energy left, he can't attack" << std::endl;
        return ;
    }
    if (this->_hitPoint < 1)
    {
        std::cout << "Unfortunately " << this->_name << " has no hitpoint anymore, he can't attack" << std::endl;
        return ;
    }
    this->_energyPoint -= 1;
    std::cout << this->_name << " attacks " << target << ", causing ";
    std::cout << this->_attackDamage << " points of damage! ";
    std::cout << "For the cost of 1 point of energy" << std::endl;
    std::cout << this->_name << " has now " << this->_energyPoint << " points of energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint > amount)
        this->_hitPoint -= amount;
    else if (this->_hitPoint > 0)
        this->_hitPoint = 0;
    else
    {
        std::cout  << this->_name << " is alredy dead." << std::endl;
        return ;
    }
    std::cout  << this->_name << " takes " << amount << " points of damage " << std::endl;
    std::cout << this->_name << " has now " << this->_hitPoint << " points of life." << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{  
    if (this->_energyPoint < 1)
    {
        std::cout << "Unfortunately " << this->_name << " has no energy left, he can't be repaired" << std::endl;
        return ;
    }
        if (this->_hitPoint < 1)
    {
        std::cout << "Unfortunately " << this->_name << " has no hitpoint anymore, he can't be repaired" << std::endl;
        return ;
    }
    this->_hitPoint += amount;
    this->_energyPoint -= 1;
    std::cout << this->_name << " gets repaired " << amount << " points of life ";
    std::cout << "for the cost of 1 point of energy" << std::endl;
    std::cout << this->_name << " has now " << this->_hitPoint << " points of life and ";
    std::cout << this->_energyPoint << " points of energy" << std::endl;
}