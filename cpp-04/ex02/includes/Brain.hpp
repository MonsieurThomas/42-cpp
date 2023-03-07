/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:25:02 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/18 16:37:05 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain 
{
     protected:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        
        Brain &operator=(Brain const &rhs);

        std::string     getIdeas(int i);
        void            createIdeas(std::string, int i);
        
};


#endif