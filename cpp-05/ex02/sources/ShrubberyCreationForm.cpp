/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:03:47 by romainthoma       #+#    #+#             */
/*   Updated: 2023/01/20 15:43:00 by rthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ 
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &name) : Form(name)
{
    *this = name;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
    	return (*this);
    return (*this);
}

void    ShrubberyCreationForm::getExecuted() const
{

    // std::ofstream	newFs;
	std::string		fileName = this->getTarget() + "_shrubbery";
    // newFs.open(fileName.c_str());
	
	std::ofstream file(fileName);
	if (file.is_open())
	{
		for (int i = 0; i < 3; i++)
		{
			file << "                                                    				"	<< std::endl;
			file << "                                                    				"	<< std::endl;
			file << "                                                    .				"	<< std::endl;
			file << "                                         .         ;  				"	<< std::endl;
			file << "            .              .              ;%     ;;   				"	<< std::endl;
			file << "              ,           ,                :;%  %;   				"	<< std::endl;
			file << "               :         ;                   :;%;'     .,   		"	<< std::endl;
			file << "      ,.        %;     %;            ;        %;'    ,;			"	<< std::endl;
			file << "        ;       ;%;  %%;        ,     %;    ;%;    ,%'				"	<< std::endl;
			file << "         %;       %;%;      ,  ;       %;  ;%;   ,%;' 				"	<< std::endl;
			file << "          ;%;      %;        ;%;        % ;%;  ,%;'				"	<< std::endl;
			file << "           `%;.     ;%;     %;'         `;%%;.%;'					"	<< std::endl;
			file << "            `:;%.    ;%%. %@;        %; ;@%;%'						"	<< std::endl;
			file << "               `:%;.  :;bd%;          %;@%;'						"	<< std::endl;
			file << "                 `@%:.  :;%.         ;@@%;'   						"	<< std::endl;
			file << "                   `@%.  `;@%.      ;@@%;         					"	<< std::endl;
			file << "                     `@%%. `@%%    ;@@%;        					"	<< std::endl;
			file << "                       ;@%. :@%%  %@@%;       						"	<< std::endl;
			file << "                         %@bd%%%bd%%:;     						"	<< std::endl;
			file << "                           #@%%%%%:;;								"	<< std::endl;
			file << "                           %@@%%%::;								"	<< std::endl;
			file << "                           %@@@%(o);  . '         					"	<< std::endl;
			file << "                           %@@@o%;:(.,'         					"	<< std::endl;
			file << "                       `.. %@@@o%::;         						"	<< std::endl;
			file << "                          `)@@@o%::;         						"	<< std::endl;
			file << "                           %@@(o)::;        						"	<< std::endl;
			file << "                          .%@@@@%::;         						"	<< std::endl;
			file << "                          ;%@@@@%::;.          					"	<< std::endl;
			file << "                         ;%@@@@%%:;;;. 							"	<< std::endl;
			file << "                     ...;%@@@@@%%:;;;;,..       		   		    " 	<< std::endl;
			file << "                    						     		   		    " 	<< std::endl;
			file << "                    						     		   		    " 	<< std::endl;
		}
		file.close();
	}
	else
	{
		std::cout << "There has been an error opening the file " << fileName << std::endl;
		return;
		// gérer l'erreur
	}
	//if (!(newFs.good()))
}
