/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 18:06:13 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/24 13:40:10 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"

Base* generate()
{
    switch (rand() % 3) {
        case 0: return new A;
        case 1: return new B;
        case 2: return new C;
    }
    return nullptr;
}

void identify(Base* p)
{
    std::cout << "First func: ";
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

void identify(Base& p)
{
    std::cout << "Second func: ";
    try
    {
        (void) dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void) dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
           try
           {
                (void) dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                
           }
           catch(const std::exception& e)
           {
            return ;
           }
        }
    }
}

int main() 
{
    std::srand(std::time(nullptr)); 
      
	Base	*a = new A;
	Base	*b = new B;
	Base	*c = new C;
	
    Base    *d = generate();
    Base    *e = generate();
    Base    *f = generate();
    
    Base    &g = *d;
    Base    &h = *e;
    Base    &i = *f;

    std::cout << std::endl;
    std::cout << "Creating manually A,B, and C" << std::endl;
    identify(a);
    identify(b);
    identify(c);
    
    std::cout << std::endl;
    std::cout << "Generating randomnly A,B, and C" << std::endl;
    identify(d);
    identify(e);
    identify(f);
    
    std::cout << std::endl;
    std::cout << "Generating randomnly A,B, and C" << std::endl;
    identify(g);
    identify(h);
    identify(i);
    
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;
    //system("leaks Conversion");
    return 0;
}