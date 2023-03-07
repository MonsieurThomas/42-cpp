/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:45:02 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/09 13:11:04 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cctype>


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You must give 3 arguments" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream file(filename);
    //std::cout << "ok" << std::endl;


	if (!file.good() || !file)
	{
        file.close();
		std::cout << "Error: could not open file " << filename << std::endl;
		return (1);
	}

	if (s1.empty())
	{
		std::cout << "s1 is empty" << std::endl;
		return (1);
	}

	size_t index;
	std::stringstream buffer;
	std::string text;
	buffer << file.rdbuf();
	text = buffer.str();
    
	while ((index = text.find(s1)) != std::string::npos)
	{
		text.erase(index, s1.length());
        text.insert(index, s2);
        index++;
	}
	std::ofstream of(filename + ".replace");

	if (!of.good())
	{
		std::cout << "Could not open file " << filename << ".replace" <<  std::endl;
		return (1);
	}
	of << text;
	of.close();
	return (0);
}
