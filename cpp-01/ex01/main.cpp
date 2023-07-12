/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:33 by romainthoma       #+#    #+#             */
/*   Updated: 2023/03/13 17:48:46 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// #include "zombieHorde.cpp"

int main()
{
    int number = 0;
    std::string input;
    std::cout << "How may zombies do you want ?"<< std::endl;

    while (!number)
    {
        if (!std::getline(std::cin, input))
            break;
        number = std::stoi(input);
    }
    std::cout << "you choosed to create a horde of " << number << std::endl;
    std::cout <<"what is the name of your horde ?" << std::endl;
    if (!std::getline(std::cin, input))
        return 0;
    
    Zombie *horde = zombieHorde(number, input);
    
    delete [] horde;
}