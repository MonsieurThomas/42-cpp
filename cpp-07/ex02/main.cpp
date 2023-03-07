/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:55:06 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/25 10:58:34 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "array.hpp"


template <typename T>
Array<T>::Array() : _tab(NULL), _n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]), _n(n)
{
}

template <typename T>
Array<T>::~Array()
{
    if (this->_tab)
		delete [] this->_tab;
}

template<typename T>
Array<T>::Array(Array const &src) : _tab(new T[src._n]), _n(src._n)
{
    for (unsigned int i = 0; i < src._n; i++)
        this->_tab[i] = src._tab[i];
}

template<typename T>
Array<T>   &Array<T>::operator=(Array const &src)
{
   delete[] this->_tab;
   this->_n = src._n;
   this->_tab = new T[src._n];
   for (unsigned int i = 0; i < this->_n; i++)
       this->_tab[i] = src._tab[i];
    return (*this);
}

template<typename T>
T   &Array<T>::operator[](unsigned int i)
{
    if ((i >= this->_n) || !this->_tab || i < 0)
        throw std::exception();
    return _tab[i];
}

template <typename T>
unsigned int Array<T>::size()
{
    return this->_n;
}

int main()
{
    Array<int>      test(void);
    Array<int>      tab_int(5);

    std::cout << "This is tab_int, it has size of: " << tab_int.size() << std::endl;
    for(unsigned int i = 0; i < 5; i++)
    {
        tab_int[i] = i * i;
        std::cout << "This is tab_int[" << i << "] = " << tab_int[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Trying copy constructor with int" << std::endl;
    std::cout << std::endl;
    
    Array<int>      tab_copy(tab_int);
    for(unsigned int i = 0; i < tab_copy.size(); i++)
        std::cout << "This is tab_copy[" << i << "] = " << tab_copy[i] << std::endl;
    
    std::cout << std::endl;
    std::cout << "Trying operator overloading '=' with char" << std::endl;
    std::cout << std::endl;
    
    Array<int>      tab_operator = tab_copy;
    for(unsigned int i = 0; i < tab_operator.size(); i++)
        std::cout << "This is tab_operator[" << i << "] = " << tab_operator[i] << std::endl;

    Array<char>     tab_char(3); 
    tab_char[0] = 'a';
    tab_char[1] = 'b';
    tab_char[2] = 'c';
    
    std::cout << std::endl;
    std::cout << "This is tab_char, it has size of: " << tab_char.size() << std::endl;
    for(unsigned int i = 0; i < tab_char.size(); i++)
        std::cout << tab_char[i] << std::endl;
    
    try
    {
        std::cout << "Exception out of range " << tab_char.size() << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << tab_char[i] << std::endl;
        std::cout << "This should not print " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: out of range" << std::endl;
    }

    std::cout << "Trying copy constructor with char" << std::endl;
    
    Array<char> src(3);
    src[0] = 'd';
    src[1] = 'e';
    src[2] = 'f';
    Array<char> src2(src);
    
    for (unsigned int i = 0; i < src2.size(); i++)
        std::cout << "this is src2[i] = " << src2[i] << std::endl;

    std::cout << std::endl;
    std::cout << "Trying operator overloading '=' with char" << std::endl;
    Array<char> src3;
    src3 = src2;
    
    for (unsigned int i = 0; i < src2.size(); i++)
        std::cout << "this is src3[i] = " << src2[i] << std::endl;

    //system("leaks Array");
}