/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:45:30 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 15:51:35 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main()
{
	std::srand(std::time(0));
	std::cout << std::endl;
	std::cout << std::endl;

	Intern john;
	Form *a = john.makeForm("ShrubberyCreationForm", "shrub");
	Form *b = john.makeForm("RobotomyRequestForm", "robot");
	Form *c = john.makeForm("PresidentialPardonForm", "presi");
	Form *blabla = john.makeForm("blablabla", "bla");
	(void) blabla; 
		
    Bureaucrat joe("Joe", 52);
    Bureaucrat james("James", 1);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "1. Showing our 2 bureaucrats and 3 forms." << std::endl;
	std::cout << std::endl;

    std::cout << *a;
    std::cout << *b;
    std::cout << *c;
    std::cout << joe;
    std::cout << james;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "======== Case of Joe ========" << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying executing the forms." << std::endl;
	std::cout << std::endl;
    
	joe.executeForm(*c);
	joe.executeForm(*a);
	joe.executeForm(*b);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying signing the forms." << std::endl;
	std::cout << std::endl;
    
	joe.signForm(*a);
	joe.signForm(*b);
	joe.signForm(*c);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying executing the forms again." << std::endl;
	std::cout << std::endl;
    
	joe.executeForm(*a);
	joe.executeForm(*b);
	joe.executeForm(*c);
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "======== Case of James ========" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying signing the forms." << std::endl;
	std::cout << std::endl;
    

	james.signForm(*a);
	james.signForm(*b);
	james.signForm(*c);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying executing the forms again." << std::endl;
	std::cout << std::endl;
    
	james.executeForm(*a);
	james.executeForm(*b);
	james.executeForm(*c);
        
	std::cout << std::endl;

	return (0);
}