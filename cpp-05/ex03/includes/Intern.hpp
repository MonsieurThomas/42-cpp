/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:06:13 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/19 19:02:57 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern;

typedef Form* (Intern::*Function)(const std::string&) const; 

class Intern {
	private:
		static const std::string	names[3];
		static const Function	    forms[3];

		Form*	ShrubberyCreation(const std::string& target) const;
		Form*	RobotomyRequest(const std::string& target) const;
		Form*	PresidentialPardon(const std::string& target) const;
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        
        Intern  &operator=(const Intern &rhs);

        Form    *makeForm(std::string const &forms, std::string const &target) const;
};

#endif