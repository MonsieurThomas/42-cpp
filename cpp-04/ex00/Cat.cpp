/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:44:55 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 17:11:55 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout <<  "cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat assignement operator" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou" << std::endl;     
}