/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:35:47 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/16 17:35:02 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->isGuard = 0;
    this->_attackDamage = 20;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    std::cout << "We are in Scavtrap constructor, construction of " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->isGuard = 0;
    this->_attackDamage = 20;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    std::cout << "We are in Scavtrap constructor, construction of " << this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "We are in Scavtrap destructor, destruction of " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &instance)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->_hitPoint = instance._hitPoint;
    this->_energyPoint = instance._energyPoint;
    this->_attackDamage = instance._attackDamage;
    this->_name = instance._name;
    return *this;
}
       
void    ScavTrap::attack(const std::string& target)
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
     
    std::cout << "ScavTrap : " << this->_name << " attacks " << target << ", causing ";
    std::cout << this->_attackDamage << " points of damage! ";
    std::cout << "For the cost of 1 point of energy" << std::endl;
    std::cout << this->_name << " has now " << this->_energyPoint << " points of energy" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->isGuard != 0)
        std::cout << this->_name << " is already in Gate Keeper mode" << std::endl;
    else
    {
        std::cout << this->_name << " is now in Gate Keeper mode" << std::endl;
        this->isGuard++;
    }
}