/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:28:52 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 16:59:01 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Animal type";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator=(const Animal &animal)
{
    std::cout << "Animal assignement operator" << std::endl;
	this->_type = animal._type;
	return (*this);
}

Animal::~Animal()
{
   std::cout << "Animal destructor called" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->_type);
}

void           Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}