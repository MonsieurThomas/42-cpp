/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:45:30 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/19 14:08:05 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Creating simple form :" << std::endl;
    std::cout << std::endl;

    Form a("a", 22, 30);
    std::cout << a;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "First exception form grade sign too high :" << std::endl;
    std::cout << std::endl;

    try
    {
        Form a("FormA", 0, 30);
        std::cout << "This should not print" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Second exception form exec sign too low :" << std::endl;
    std::cout << std::endl;

    try
    {
        Form a("FormA", 30, 152);
        std::cout << "This should not print" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Creating bureaucrat and form :" << std::endl;
    std::cout << std::endl;

    Bureaucrat joe("Joe", 20);
    Form formA("formA", 18, 30);
    std::cout << joe;
    std::cout << formA;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Bureaucrat tries to sign a form with level too high :" << std::endl;
    std::cout << std::endl;

    joe.signForm(formA);
    std::cout << joe;
    std::cout << formA;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Bureaucrat get promote then tries again :" << std::endl;
    std::cout << std::endl;

    joe.promote();
    joe.promote();
    
    std::cout << joe;
    std::cout << formA;

    std::cout << formA.isSigned() << std::endl;
    joe.signForm(formA);
    std::cout << formA.isSigned() << std::endl;
    
    
    
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << "Crash through promote" << std::endl;
    // std::cout << std::endl;

    // try
    // {
    //     Bureaucrat a("Joe", 3);
    //     std::cout << a;
    //     a.promote();
    //     std::cout << a;
    //     a.promote();
    //     std::cout << a;
    //     a.promote();
    //     std::cout << a;
    //     a.promote();
    //     std::cout << "This should not print" << std::endl;

    // }
    // catch (const std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << "Crash through demote" << std::endl;
    // std::cout << std::endl;

    // try
    // {
    //     Bureaucrat a("Joe", 147);
    //     std::cout << a;
    //     a.demote();
    //     std::cout << a;
    //     a.demote();
    //     std::cout << a;
    //     a.demote();
    //     std::cout << a;
    //     a.demote();
    //     std::cout << "This should not print" << std::endl;

    // }
    // catch (const std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }

    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::cout << "Creating simple form :" << std::endl;
    // std::cout << std::endl;
    
}