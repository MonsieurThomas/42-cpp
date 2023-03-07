/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:06:13 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/19 13:53:17 by rthomas          ###   ########.fr       */
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
        bool                _isSigned;
        int const           _signedGrad;
        int const           _execGrad;
    public:
        Form();
        Form(std::string const &name, int const signedGrad, int const execGrad);
        Form(Form const &copy);
        ~Form();
        
        Form &operator=(Form const &rhs);

        std::string     getName() const;
        int             getSignedGrad() const;
        int             getExecGrad() const;
        bool            isSigned() const;
        
        void            beSigned(Bureaucrat bureaucrat); 

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
};
std::ostream    &operator<<(std::ostream &o, Form const &rhs);

#endif