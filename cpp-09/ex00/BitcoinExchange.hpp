/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:03:46 by romainthoma       #+#    #+#             */
/*   Updated: 2023/04/21 16:21:33 by romainthoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class BitcoinExchange 
{
	public:
	
	int	annee;
	int	mois;
	int	jour;

	int lastAnnee;
	int lastMois;
	int lastJour;

	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &copy);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);


	bool isLastDate(std::string data_date, std::string input_date);
};

class Data {
public:
    std::string date_data;
    double prix_bitcoin;

    Data();
    Data(const std::string &date, double prix);
    ~Data();
	Data(Data const &copy);
	Data &operator=(Data const &rhs);
};

#endif