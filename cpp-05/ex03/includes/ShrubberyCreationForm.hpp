/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:47:23 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/19 19:05:39 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm &name);
        virtual ~ShrubberyCreationForm();
        
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

        void    getExecuted() const;
};

#endif