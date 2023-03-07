/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 09:06:25 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/25 18:22:33 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &copy) : _n(copy._n), _v(copy._n)
{
}

Span::~Span()
{
    this->_v.clear();
}

Span    &Span::operator=(Span const &instance)
{
    this->_n = instance._n;
    this->_v = instance._v;
    return (*this);
}


void    Span::addNumber(int i)
{
    if (this->_v.size() == this->_n)
        throw std::exception();
    else
        _v.push_back(i);
}

void    Span::addMultiple(int start, int end)
{
    while (start <= end && start <= (int)this->_n)
    {
        this->_v.push_back(start);
        start++;
    }
}

int    Span::shortestSpan()
{
    if (this->_v.size() < 2)
        throw std::exception();
    int a = this->_v[0];
    int c = 2147483647;
    for (std::vector<int>::iterator it = this->_v.begin() + 1; it != this->_v.end(); it++)
    {
        int b = *it;
        int tmp = a - b;
        if (tmp < 0)
            tmp *= -1;
        if(tmp < c)
            c = tmp;
        a = *it;
    }
    return (c);
}

int    Span::longestSpan()
{
    if (this->_v.size() < 2)
        throw std::exception();
    int a = this->_v[0];
    int c = -2147483648;
    for (std::vector<int>::iterator it = this->_v.begin() + 1; it != this->_v.end(); it++)
    {
        int b = *it;
        int tmp = a - b;
        if (tmp < 0)
            tmp *= -1;
        if(tmp > c)
            c = tmp;
        a = *it;
    }
    return (c);
}

void    Span::printingVec()
{
    std::cout << "Printing span" << std::endl;
    for (std::vector<int>::iterator it = this->_v.begin(); it != this->_v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}