/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:01:16 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/16 15:03:30 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    ScavTrap c("c");
    ScavTrap d("d");
    
    std::cout << std::endl;
    c.attack("b");
    std::cout << std::endl;
    d.takeDamage(20);
    std::cout << std::endl;
    d.beRepaired(25);
    std::cout << std::endl;
    d.guardGate();
    d.guardGate();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    FragTrap e("e");
    FragTrap f("f");

    std::cout << std::endl;
    e.attack("f");
    std::cout << std::endl;
    f.takeDamage(20);
    std::cout << std::endl;
    f.beRepaired(25);
    std::cout << std::endl;
    e.highFivesGuys();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    DiamondTrap g("g");
    DiamondTrap h("h");

    std::cout << std::endl;
    g.attack("h");
    std::cout << std::endl;
    h.beRepaired(10);
    std::cout << std::endl;
    h.attack("g");
    std::cout << std::endl;
    g.beRepaired(10);
    std::cout << std::endl;
    g.guardGate();
    std::cout << std::endl;
    g.whoAmI();
    
    
}