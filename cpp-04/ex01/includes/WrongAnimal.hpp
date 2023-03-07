#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal 
{
    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &rhs);

        std::string     getType() const;
        virtual void    makeSound() const;
};

class WrongCat :  public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const &copy);

        WrongCat &operator=(WrongCat const &rhs);

        void    makeSound() const;
};

#endif