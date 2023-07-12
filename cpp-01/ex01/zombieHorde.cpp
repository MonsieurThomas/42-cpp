/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:13:04 by romainthoma       #+#    #+#             */
/*   Updated: 2023/03/13 17:40:30 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    Zombie *horde = new Zombie[n];

    for (int i = 0; i < n ;i++)
    {
        horde[i].setname(name);
        horde[i].announce();
    }
    return (horde);
}