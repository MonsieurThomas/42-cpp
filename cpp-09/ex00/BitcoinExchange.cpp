/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:05:12 by romainthoma       #+#    #+#             */
/*   Updated: 2023/06/04 18:43:02 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	this->annee = 0;
	this->mois = 0;
	this->jour = 0;
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	annee = rhs.annee;
	mois = rhs.mois;
	jour = rhs.jour;

	lastAnnee = rhs.lastAnnee;
	lastMois = rhs.lastMois;
	lastJour = rhs.lastJour;
	return (*this);
}

Data::Data() {}

Data::Data(const std::string &date, double prix) : date_data(date), prix_bitcoin(prix) {}

Data::~Data() {}

Data::Data(Data const &copy)
{
	*this = copy;
}
Data &Data::operator=(Data const &rhs)
{
	date_data = rhs.date_data;
	prix_bitcoin = rhs.prix_bitcoin;
	return (*this);
}

bool BitcoinExchange::isLastDate(std::string data_date, std::string input_date)
{
	
	int	data_annee = std::stoi(data_date.substr(0).c_str());
	int	data_mois = std::stoi(data_date.substr(5).c_str());
	int	data_jour = std::stoi(data_date.substr(8).c_str());

	int	input_annee = std::stoi(input_date.substr(0).c_str());
	int	input_mois = std::stoi(input_date.substr(5).c_str());
	int	input_jour = std::stoi(input_date.substr(8).c_str());

	// std::cout << "This is data_annee = " << data_annee << std::endl;
	// std::cout << "This is data_mois = " << data_mois << std::endl;
	// std::cout << "This is data_jour = " << data_jour << std::endl << std::endl;

	if (data_jour > this->lastJour && data_jour > input_jour && this->annee && this->mois)
		return true;
	if (data_mois > this->lastMois && data_mois > input_mois && this->annee)
		return true;
	if (data_annee > this->lastAnnee && data_annee > input_annee)
		return true;
	
		
	if (data_annee == input_annee)
		this->annee = 1;
	if (data_mois == input_mois && this->annee)
		this->mois = 1;
	if (data_jour == input_jour && this->mois && this->annee)
		this->jour = 1;
		
	if (this->jour && this->mois && this->annee)
		return true;

	this->lastAnnee = annee;
	this->lastMois = mois;
	this->lastJour = jour;
	return false;
}