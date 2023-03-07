/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:24 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/13 16:13:58 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string inputName) : _name(inputName)
{
}

HumanB::~HumanB()
{  
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << _weapon->getType() <<std::endl;
}

void    HumanB::setWeapon(Weapon &inputWeapon)
{
    this->_weapon = &inputWeapon;
}