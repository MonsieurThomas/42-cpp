/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:02:16 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 17:23:37 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}
Brain::~Brain()
{
        std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain assigment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

void            Brain::createIdeas(std::string input, int i)
{
    this->_ideas[i] = input;
}

std::string     Brain::getIdeas(int i)
{
    return (this->_ideas[i]);
}
