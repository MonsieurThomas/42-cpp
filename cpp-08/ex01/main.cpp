/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 09:54:08 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/25 18:24:26 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span a(2);
    Span span(10);

    std::cout << std::endl;

    try
    {
        std::cout << std::endl;
        std::cout << "Trying to overflow the size of the vector" << std::endl;
        
        a.addNumber(1);
        a.addNumber(2);
        a.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cout << "The size if full already" << std::endl;
    }
    
    span.addNumber(1);
    try
    {
        std::cout << std::endl;
        std::cout << "Trying the shortestSpan func with only 1 number in the vector" << std::endl;
        std::cout << span.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Not enough numbers in the container" << std::endl;
    }
    
    span.addNumber(3);
    span.addNumber(6);
    span.addNumber(10);
    span.addNumber(22);

    std::cout << std::endl;
    std::cout << "This is the vector span before we use shortest and longest func" << std::endl;
    std::cout << std::endl;
    span.printingVec();
    std::cout << std::endl;
    std::cout << "ShortestSpan : " << span.shortestSpan() << std::endl;
    std::cout << "LongestSpan : " << span.longestSpan() << std::endl;
    std::cout << std::endl;

    Span test(12000);
    
    for (int i = 0; i < 11999; i++)
        test.addNumber(i);
    
    test.addNumber(12004);
    std::cout << "It worked until here" << std::endl;
    std::cout << "It worked until here too" << std::endl;
    try
    {
        test.addNumber(12006);
        std::cout << "It worked until here too too" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "The vector is full already" << std::endl;
    }
    std::cout << "test ShortestSpan : " << test.shortestSpan() << std::endl;
    std::cout << "test LongestSpan : " << test.longestSpan() << std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Trying the add multiple func" << std::endl;

    Span multiple(8);
    
    multiple.addMultiple(2, 10);
    multiple.printingVec();
        
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "subject test: " << std::endl;
    std::cout << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
}