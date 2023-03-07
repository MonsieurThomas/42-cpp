/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:35:14 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 16:41:59 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain       *_brainDog;

    public:
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        
        Dog	&operator=(const Dog &rhs);

        void makeSound() const;
        Brain *getBrain() const;
};
#endif