/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:06:13 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/17 16:17:36 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

class Bureaucrat
{
    private:
        std::string const   _name;
        int                 _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        ~Bureaucrat();
        
        Bureaucrat &operator=(Bureaucrat const &rhs);

        std::string     getName() const;
        int             getGrade() const;
        void            promote();
        void            demote();


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

std::ostream    &operator<<(std::ostream &o, Bureaucrat &rhs);

#endif