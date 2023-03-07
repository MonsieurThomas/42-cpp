/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:41:54 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 14:13:28 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain       *_brainCat;
        
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        
        Cat	&operator=(const Cat &rhs);

        void makeSound() const;
        Brain *getBrain() const;
};

#endif