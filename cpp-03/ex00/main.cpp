/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:01:16 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/16 14:45:26 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");
    
    std::cout << "There are players a and b" << std::endl;
    a.attack("b");
    std::cout << std::endl;
    b.takeDamage(5);
    std::cout << std::endl;
    b.beRepaired(7);
    std::cout << std::endl;
    b.takeDamage(15);
    std::cout << std::endl;
    b.takeDamage(10);
    std::cout << std::endl;
    b.beRepaired(3);
}