/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:12:33 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/13 15:39:53 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string inputName;
    std::string inputNumber;
    int number;
    int error;

    
    std::cout << "How many zombies are in the horde ?" << std::endl;
    while(42)
    {
        error = 0;
        std::cout << "- ";
        if(!getline(std::cin, inputNumber))
            break;
        for(long i = 0; i < inputNumber.length(); i++)
            if (!std::isdigit(inputNumber[i]))
                error ++;
        if (number < 0)
            error++;
        if (error > 0)
            std::cout << "You can only give positive number" << std::endl;
        else 
           break;
    }
    if (inputNumber.empty())
        return 0;
    number = std::stoi(inputNumber);
    std::cout << "You choosed to create an Horde of " << number << " zombies." << std::endl;
    std::cout << "What is the name of the zombies of the horde ?" << std::endl;
    std::cout << "- ";
    getline(std::cin, inputName);
    if (inputName.empty())
        return 0;
    Zombie *horde = zombieHorde(number, inputName);
    std::cout << "this is announce of horde[0]" << std::endl;
    horde[0].announce();
    delete [] horde;
}