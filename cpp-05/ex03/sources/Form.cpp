/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:30:26 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 15:48:47 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form()
: _name("Default name"), _target("Default target"), _isSigned(false), _signedGrad(150), _execGrad(150)
{   
}

Form::Form(std::string const &name, int const signedGrad, int const execGrad)
: _name(name), _target("Default target"), _isSigned(false), _signedGrad(signedGrad), _execGrad(execGrad)
{
    if (this->_execGrad > 150 || this->_signedGrad > 150)
        throw Form::GradeTooLowException();
    if(this->_execGrad < 1 || this->_signedGrad < 1)
        throw Form::GradeTooHighException();
}

Form::Form(std::string const &name, int const signedGrad, int const execGrad, std::string const &target)
: _name(name), _target(target), _isSigned(false), _signedGrad(signedGrad), _execGrad(execGrad)
{
    if (this->_execGrad > 150 || this->_signedGrad > 150)
        throw Form::GradeTooLowException();
    if(this->_execGrad < 1 || this->_signedGrad < 1)
        throw Form::GradeTooHighException();
}

Form::~Form()
{
}


Form::Form(Form const &form)
: _name(form._name), _signedGrad(form._signedGrad), _execGrad(form._execGrad)
{
    *this = form;
}

Form &Form::operator=(Form const &rhs)
{
    _isSigned = rhs._execGrad;
    return (*this);
}

 std::string     Form::getName() const
 {
     return (this->_name);
 }
 
std::string     Form::getTarget() const
{
    return  this->_target;
}

 
int     Form::getSignedGrad() const
{
     return (this->_signedGrad);
}

int     Form::getExecGrad() const
{
     return (this->_execGrad);
}

bool     Form::getIsSigned() const
{
     return (this->_isSigned);
}

void            Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signedGrad)
        throw GradeTooLowException();
    else
        this->_isSigned = true;
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
    std::string isSign;

    if (rhs.getIsSigned() == 0)
        isSign = "not signed.";
    else
        isSign = "signed";
    o << "Form :" << rhs.getName() << " needs a grade " << rhs.getSignedGrad() << " to be signed, and a grade of " << rhs.getExecGrad();
    o << " to be executed. Its currently " << isSign << std::endl;
    return (o);
}

void	Form::execute(Bureaucrat const &executor) const
{
    if(!this->getIsSigned())
        throw GradeNotSignedException();
    if(executor.getGrade() > this->getExecGrad())
        throw GradeTooLowException();
    getExecuted();
}

Form::GradeTooLowException::GradeTooLowException() throw() {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) throw() : std::exception(src) {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &rhs) throw() {
    std::exception::operator=(rhs);
    return *this;
}
const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

Form::GradeTooHighException::GradeTooHighException() throw() {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src) throw() : std::exception(src) {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &rhs) throw() {
    std::exception::operator=(rhs);
    return *this;
}
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

Form::GradeNotSignedException::GradeNotSignedException() throw() {}
Form::GradeNotSignedException::GradeNotSignedException(GradeNotSignedException const &src) throw() : std::exception(src) {}
Form::GradeNotSignedException::~GradeNotSignedException() throw() {}
Form::GradeNotSignedException &Form::GradeNotSignedException::operator=(GradeNotSignedException const &rhs) throw() {
    std::exception::operator=(rhs);
    return *this;
}
const char* Form::GradeNotSignedException::what() const throw() {
    return "Form is not signed";
}