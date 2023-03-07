/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:45:30 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/17 15:26:49 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Creating simple bureaucrat :" << std::endl;
    std::cout << std::endl;

    Bureaucrat a("Joe", 22);
    std::cout << a;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "First exception grade too high :" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat a("Joe", -2);
        std::cout << "This should not print" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Second exception grade too low :" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat a("Joe", 152);
        std::cout << "This should not print" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Crash through promote" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat a("Joe", 3);
        std::cout << a;
        a.promote();
        std::cout << a;
        a.promote();
        std::cout << a;
        a.promote();
        std::cout << a;
        a.promote();
        std::cout << "This should not print" << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Crash through demote" << std::endl;
    std::cout << std::endl;

    try
    {
        Bureaucrat a("Joe", 147);
        std::cout << a;
        a.demote();
        std::cout << a;
        a.demote();
        std::cout << a;
        a.demote();
        std::cout << a;
        a.demote();
        std::cout << "This should not print" << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    } 
}