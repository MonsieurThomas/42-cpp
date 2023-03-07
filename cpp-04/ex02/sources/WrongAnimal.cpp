/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:01:18 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 14:09:17 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "Wrong animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "Wrong animal copy constructor" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "Wrong animal assignement operator" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal destructor" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return(this->_type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal sound" << std::endl;
}




WrongCat::WrongCat()
{
    this->_type = "Wrong Cat";
    std::cout << "Wrong cat constructor" << std::endl;    
}

WrongCat::WrongCat(WrongCat const &copy)
{
    *this = copy;
    std::cout << "Wrong cat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "Wrong cat assignement operator" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

WrongCat::~WrongCat()
{
        std::cout << "Wrong cat destructor" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong cat sound" << std::endl;
}

