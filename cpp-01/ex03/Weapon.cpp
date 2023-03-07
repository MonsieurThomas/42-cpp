#include "Weapon.hpp"

std::string &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string input)
{
    this->_type = input;
}

Weapon::Weapon( std::string input ) : _type(input)
{
}

Weapon::~Weapon()
{

}