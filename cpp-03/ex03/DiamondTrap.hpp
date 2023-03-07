#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &copy);
        DiamondTrap &operator=(DiamondTrap &instance);
        virtual ~DiamondTrap();

        void whoAmI();
        void attack(const std::string& target);
};

#endif