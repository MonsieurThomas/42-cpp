
#include "Phonebook.hpp"
#include <iomanip>


Phonebook::Phonebook()
{
    this->count = 0;
}
Phonebook::~Phonebook()
{

}

int    too_many_contact(void)
{
    std::string input;

    while (42)
    {
        std::cout << "You have 8 contacts already, you will loose the first if you add an other one, you want to continue ? yes or no" << std::endl;
        if(!std::getline(std::cin, input))
            break;
        if (input == "yes" || input == "no")
            break;
    }
    if (input == "no")
    {
        std::cout << "Alright, no change made" << std::endl;
        return (0);

    }
    if (input == "yes")
    {
        std::cout << "Alright, first contact erased" << std::endl;
        return (1);
    }
    return (0);
}

void Phonebook::add_contact(void)
{
	if (this->count == 8)
    {
		 if (!too_many_contact())
            return;
        else
        {
            for (int i = 1; i < 8; i++)
                this->contact[i - 1] = this->contact[i];
        count--;
        std::cout << "Adding new contact:" << std::endl;
        this->contact[count].set_attribute();
        std::cout << "Contact added:" << std::endl;
        count++;
        return ;
        }
    }
    std::cout << "Adding new contact:" << std::endl;
	this->contact[this->count].set_attribute();
    std::cout << "Contact added:" << std::endl;
	this->count++;
}

std::string	is_too_long(std::string src) //
{
	if (src.size() > 10)
	{
		src.resize(9);
		src.append(".");
	}
	return (src);
}

int isDigitString(const std::string& s)
{
    return std::all_of(s.begin(), s.end(), ::isdigit);
}

int    Phonebook::search()
{
    int i;
    std::string input;

    if (!count)
        std::cout << "\n The index is empty for the moment, you can add contact this the \"ADD\" comment" << std::endl;
    else
    {
        std::cout << "    index |first name| last name| nick name|" << std::endl;
        i = 0;
        while (i < count)
        {
            std::cout << std::setw(10);
            std::cout << i;
            std::cout << '|';
            std::cout << std::setw(10);
            std::cout << is_too_long(this->contact[i].get_first_name());
            std::cout << '|';
            std::cout << std::setw(10);
            std::cout << is_too_long(this->contact[i].get_last_name());
            std::cout << '|';
            std::cout << std::setw(10);
            std::cout << is_too_long(this->contact[i].get_nick_name());
            std::cout << '|';
            std::cout << std::endl;
            i++;
        }
        if (count)
        {
            std::cout << "Choose an index contact to see his details infornations :" << std::endl;
            while (42)
            {
                std::cout << "-";
                if(!std::getline(std::cin, input))
                    break;
                if (input == "EXIT")
                    return 0;
                if ((isDigitString(input)) && !input.empty())
                {
                    i = atoi(input.c_str());
                    if ((i <= (count - 1)))
                        break ;
                    else
                        std::cout << "You must enter a valid index." << std::endl;
                }
                else
                    std::cout << "You must enter a valid index." << std::endl;
            }
            this->contact[i].print_attribute();
        }
    }
    return 1;
}