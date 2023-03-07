/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:45:30 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 13:52:42 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main()
{
	std::srand(std::time(0));

	std::cout << std::endl;
    ShrubberyCreationForm shrub("schrubForm");
    RobotomyRequestForm robot("robotForm");
    PresidentialPardonForm president("presidentForm");
    Bureaucrat joe("Joe", 52);
    Bureaucrat james("James", 1);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "1. Showing our 2 bureaucrats and 3 forms." << std::endl;
	std::cout << std::endl;

    std::cout << shrub;
    std::cout << robot;
    std::cout << president;
    std::cout << joe;
    std::cout << james;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "======== Case of Joe ========" << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying executing the forms." << std::endl;
	std::cout << std::endl;
    
	joe.executeForm(president);
	joe.executeForm(shrub);
	joe.executeForm(robot);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying signing the forms." << std::endl;
	std::cout << std::endl;
    
	joe.signForm(shrub);
	joe.signForm(robot);
	joe.signForm(president);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying executing the forms again." << std::endl;
	std::cout << std::endl;
    
	joe.executeForm(shrub);
	joe.executeForm(robot);
	joe.executeForm(president);
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "======== Case of James ========" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying signing the forms." << std::endl;
	std::cout << std::endl;
    

	james.signForm(shrub);
	james.signForm(robot);
	james.signForm(president);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Trying executing the forms again." << std::endl;
	std::cout << std::endl;
    
	james.executeForm(shrub);
	james.executeForm(robot);
	james.executeForm(president);
        
	std::cout << std::endl;

	return (0);
}
