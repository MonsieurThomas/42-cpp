/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:41:24 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/13 16:12:57 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string inputName, Weapon &inputWeapon) : _name(inputName), _weapon(inputWeapon)
{
}

HumanA::~HumanA()
{  
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() <<std::endl;
}