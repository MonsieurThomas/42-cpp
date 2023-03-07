/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:33:37 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/09 10:56:15 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if ( ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int j = 1; j < ac; j++)
    {
        std::string av1 = av[j];
        for (int i = 0; i < av1.length(); i++)
        {
            av1[i] = std::toupper(av1[i]);
        }
        std::cout << av1;
    }
    std::cout << std::endl;
}