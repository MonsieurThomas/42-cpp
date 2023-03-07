/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:13:04 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/09 12:03:23 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    int i;

    i = 0;
    if (n <= 0)
        return NULL;

    Zombie *theHorde = new Zombie[n];
    while (i < n)
    {
        theHorde[i].setname(name);
        theHorde[i].announce();
        i++;
    }
    return (theHorde);
}