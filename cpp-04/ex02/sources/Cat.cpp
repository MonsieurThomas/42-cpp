/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:44:55 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 14:14:06 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
	this->_brainCat = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout <<  "cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete this->_brainCat;
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

Brain *Cat::getBrain() const
{
	return (this->_brainCat);
}