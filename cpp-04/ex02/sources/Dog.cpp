/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:45:41 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 16:42:32 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
	this->_brainDog = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
	delete this->_brainDog;
}

Dog	&Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog assignement operator" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouaf" << std::endl;     
}

Brain *Dog::getBrain() const
{
	return (this->_brainDog);
}

