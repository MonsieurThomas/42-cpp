/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:02:02 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/25 10:40:58 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
    int tab[] = {1, 2, 3};
    iter(tab, 3, func<int>);
    
    std::cout << std::endl;

    float tab2[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    iter(tab2, 10, func<float>);

    std::cout << std::endl;

    std::string tab3[] = {"string1", "string2", "string3", "string4", "string5"};
    iter(tab3, 5, func<std::string>);
}