#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>


class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();

        void    announce(void);
        void    setname(std::string input);
};

// Zombie	*newZombie( std::string name );
// void	randomChump( std::string name );

Zombie* zombieHorde( int n, std::string name );

#endif