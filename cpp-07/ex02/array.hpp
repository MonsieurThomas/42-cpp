/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:56:03 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/25 11:00:20 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
    private:
        T   *_tab;
        unsigned int _n;
    
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        ~Array();
        Array   &operator=(Array const &src);
        T &operator[](unsigned int i);
        
        unsigned int size();

};

#endif