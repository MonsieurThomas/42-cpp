/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:06:13 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 14:16:14 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class Form
{
    private:
        std::string const   _name;
        std::string const   _target;
        bool                _isSigned;
        int const           _signedGrad;
        int const           _execGrad;
        
    public:
        Form();
        Form(std::string const &name, int const signedGrad, int const execGrad);
        Form(std::string const &name, int const signedGrad, int const execGrad, std::string const &target);
        Form(Form const &form);
        virtual ~Form();
        
        Form &operator=(Form const &rhs);

        std::string     getName() const;
        std::string     getTarget() const;
        int             getSignedGrad() const;
        int             getExecGrad() const;
        bool            getIsSigned() const;
        void            beSigned(Bureaucrat bureaucrat);
        void	        execute(Bureaucrat const &executor) const;
        virtual void    getExecuted() const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
                GradeTooHighException() throw();
                GradeTooHighException(GradeTooHighException const &src) throw();
                virtual ~GradeTooHighException() throw();
                GradeTooHighException &operator=(GradeTooHighException const &rhs) throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
                GradeTooLowException() throw();
                GradeTooLowException(GradeTooLowException const &src) throw();
                virtual ~GradeTooLowException() throw();
                GradeTooLowException &operator=(GradeTooLowException const &rhs) throw();
        };

        class GradeNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
                GradeNotSignedException() throw();
                GradeNotSignedException(GradeNotSignedException const &src) throw();
                virtual ~GradeNotSignedException() throw();
                GradeNotSignedException &operator=(GradeNotSignedException const &rhs) throw();
        };
};
std::ostream    &operator<<(std::ostream &o, Form const &rhs);

#endif