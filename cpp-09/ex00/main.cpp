#include "BitcoinExchange.hpp"

bool isDataLegit(std::string date, double prix)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-') {

		std::cout << "Error: date problem." << "with date.size() = " << date.size() << "with date[4] = " << date[4] << "with date[7] = " << date[7] << std::endl;
            return false;
	}
	int mois = std::stoi(date.substr(5).c_str());
	int jour = std::stoi(date.substr(8).c_str());
	if (mois > 12 || jour > 31)
		std::cout << "Error: bad input => " << date << std::endl;
	if (prix <= 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	if (prix >= 1000){
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	
	std::ifstream fichier(av[1]);
    if (!fichier.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
	std::ifstream data("./data.csv");
    if (!data.is_open()) {
        std::cout << "Error: could not open data.csv." << std::endl;
        return 1;
    }

	std::string ligne;
    std::vector<Data> dataVector; //
     while (std::getline(data, ligne)) {
        std::istringstream iss(ligne);
        std::string date_data;
        double prix_bitcoin;
        if (std::getline(iss, date_data, ',') && iss >> prix_bitcoin) {
            dataVector.push_back(Data(date_data, prix_bitcoin));
        }
    }
	
	ligne.clear();
	double	lastPrice = 0;

	while (std::getline(fichier, ligne))
	{
        std::istringstream iss(ligne);
        std::string date_input;
        double prix_input;
		BitcoinExchange a;
        if (std::getline(iss, date_input, '|') && iss >> prix_input) {
			if (date_input.size() == 11 && date_input[10] == ' ')
				date_input.pop_back();
            if (isDataLegit(date_input, prix_input))
			{
				for (std::vector<Data>::const_iterator it = dataVector.begin(); it != dataVector.end(); ++it)
				{
					// std::cout << "THis is date input = " << date_input << std::endl;
					// std::cout << "THis is it->date_data = " << it->date_data << std::endl << std::endl;
					if (a.isLastDate(it->date_data, date_input))
					{
						if (it->date_data == date_input)
							std::cout << date_input << " => " << prix_input << " = " << prix_input * it->prix_bitcoin << std::endl;
						else
							std::cout << date_input << " => " << prix_input << " = " << prix_input * lastPrice << std::endl;
						a.annee = 0;
						a.mois = 0;
						a.jour = 0;
						break ;
					}
						lastPrice = it->prix_bitcoin;
				}
            }
        }
		else
			if(ligne.find('|') == std::string::npos)
				std::cout << "Error: bad input => " << ligne << std::endl;
    }
}