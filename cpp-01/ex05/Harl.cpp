/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:08:17 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/09 13:40:17 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void(Harl::*cFunc) (void);

Harl::Harl()
{   
}

Harl::~Harl()
{
}

void        Harl::complain(std::string level)
{
    int         i = 0;
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    cFunc       choiceFunc[5] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::badInput};
    
    while (i < 4 && (list[i] != level))
        i++; 	
    (this->*(choiceFunc[i]))();

}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::badInput( void )
{
    std::cout << "What is this language, Harl doesn't speak it" << std::endl;
}