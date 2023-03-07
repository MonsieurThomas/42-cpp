/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:46:27 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/16 18:16:05 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_name = "Default diamond";
    this->_attackDamage = FragTrap::_attackDamage;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energyPoint = ScavTrap::_energyPoint;
    std::cout << "We are in DiamondTrap constructor, construction of " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
    this->_name = name;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energyPoint = ScavTrap::_energyPoint;
    std::cout << "We are in DiamondTrap constructor, construction of " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &instance)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    this->FragTrap::_hitPoint = FragTrap::_hitPoint;
    this->ScavTrap::_energyPoint = ScavTrap::_energyPoint;
    this->FragTrap::_attackDamage = FragTrap::_attackDamage;
    this->_name = instance._name + "_clap_trap";
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Here is DiamondTrap, this is my name : " << this->_name;
    std::cout << ", and here is the name of my ClapTrap: " << ClapTrap::_name << std::endl; //
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "We are in DiamondTrap destructor, destruction of " << this->_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}