/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:50:06 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/11 10:25:41 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
    return;
}

void    Contact::set_attribute()
{
    std::string     input;

    while (42)
    {
        std::cout << "Enter first name: ";
        if(!std::getline(std::cin, input))
            break;
        if (input.size() != 0)
        {
            this->first_name = input;
            break;
        }
        else
            std::cout << "You have to give a first name." << std::endl;
    }
    
    while (42)
    {
        std::cout << "Enter last name : ";
        if(!std::getline(std::cin, input))
            break;
        if (input.size() != 0)
        {
            this->last_name = input;
            break;
        }
        else
            std::cout << "You have to give a last name." << std::endl;
    }

    while (42)
    {
        std::cout << "Enter nick name : ";
        if(!std::getline(std::cin, input))
            break;
        if (input.size() != 0)
        {
            this->nick_name = input;
            break;
        }
        else
            std::cout << "You have to give a nick name." << std::endl;
        
    }

    while (42)
    {
        std::cout << "Enter phone number : ";
        if(!std::getline(std::cin, input))
            break;
        if (input.size() != 0)
        {
            this->phone_number = input;
            break;
        }
        else
            std::cout << "You have to give a phone number." << std::endl;  
    }
    
    while (42)
    {
        std::cout << "Enter darkest secret : ";
        if(!std::getline(std::cin, input))
            break;
        if (input.size() != 0)
        {
            this->darkest_secret = input;
            break;
        }
        else
            std::cout << "You have to give a darkest secret." << std::endl;  
    }
    
}

void    Contact::print_attribute()
{
    std::cout << "first name:";
    std::cout << this->first_name << std::endl;
    std::cout << "last name:";
    std::cout << this->last_name << std::endl;
    std::cout << "nick name:";
    std::cout << this->nick_name << std::endl;
    std::cout << "phone number:";
    std::cout << this->phone_number << std::endl;
    std::cout << "darkest_secret:";
    std::cout << this->darkest_secret << std::endl;
}

std::string Contact::get_first_name()
{
    return (this->first_name);
}

std::string Contact::get_last_name()
{
    return (this->last_name);
}

std::string Contact::get_nick_name()
{
    return(this->nick_name);
}

std::string Contact::get_phone_number()
{
    return(this->phone_number);
}

std::string Contact::get_darkest_secret()
{
    return(this->darkest_secret);
}