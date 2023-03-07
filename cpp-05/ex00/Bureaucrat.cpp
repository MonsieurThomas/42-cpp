/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:48:30 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 13:15:39 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default")
{
    this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name)
{
    *this = copy;
}

Bureaucrat      &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return (*this);
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
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}
void            Bureaucrat::demote()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
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
