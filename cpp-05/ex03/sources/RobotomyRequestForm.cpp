/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 08:17:47 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 15:49:19 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm() : Form()
{ 
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45, target)
{ 
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
{
        *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    	return (*this);
    return (*this);
}

void RobotomyRequestForm::getExecuted() const
{
    std::cout << "Drilling noise" << std::endl;
   if (rand() % 2 == 0)
       std::cout << this->getTarget() << " has been robotomised succesfully." << std::endl;
   else
       std::cout << this->getTarget() << " could not be robotomised." << std::endl;
}
