/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:05:37 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/16 17:34:50 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "We are in Fragtrap constructor, construction of " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "We are in Fragtrap constructor, construction of " << this->_name << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &instance)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    this->_hitPoint = instance._hitPoint;
    this->_energyPoint = instance._energyPoint;
    this->_attackDamage = instance._attackDamage;
    this->_name = instance._name;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "We are in Fragtrap destructor, destruction of " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "You want to make a high five ?" <<std::endl;
}