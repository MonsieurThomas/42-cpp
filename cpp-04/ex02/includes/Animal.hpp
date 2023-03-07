/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:25:02 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 17:40:19 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal 
{
    protected:
        std::string _type;
    public:
        Animal();
    	Animal(const std::string &type);
    	Animal(const Animal &copy);
        Animal	&operator=(const Animal &animal);      
        virtual ~Animal() = 0;
        
        virtual void    makeSound() const;
        std::string     getType() const;

};

#endif