/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:48:30 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 14:14:56 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
    this->_name = bureaucrat._name;
    this->_grade = bureaucrat._grade;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
        this ->_name = name;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string     Bureaucrat::getName() const
{
    return(this->_name);
}

int             Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void            Bureaucrat::promote()
{
    if (this->_grade == 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}
void            Bureaucrat::demote()
{
    if (this->_grade == 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

void        Bureaucrat::signForm(Form &form) const
{
    if (form.getIsSigned() == true)
        std::cout << "The form: " << form.getName() << "is signed already" << std::endl;
    else
    {
        try
        {
            form.beSigned(*this);
            std::cout << this->_name << " signs " << form.getName() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << this->_name << " : " << e.what() << " to sign the form :" << form.getName() << std::endl;
        }
    }
}

void       Bureaucrat::executeForm(Form const &form) const
{
    try
    {
       form.execute(*this);
       std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " could not execute the form '" << form.getName() << "' because " << e.what() << std::endl;
    }
    
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat &rhs)
{
    o << rhs.getName() << " has a grade of " << rhs.getGrade() << std::endl;
    return(o);
}


Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) throw() : std::exception(src) {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs) throw() {
    std::exception::operator=(rhs);
    return *this;
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}


Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src) throw() : std::exception(src) {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs) throw() {
    std::exception::operator=(rhs);
    return *this;
}
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}
