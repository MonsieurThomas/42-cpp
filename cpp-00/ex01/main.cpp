#include <iostream>
#include "contact.hpp"
#include "Phonebook.hpp"
#include <iomanip>


int main()
{
    std::string input;
    Phonebook phonebook;
    int count;

    count = 0;
    std::cout <<"Welcome in the phonebook" << std::endl;

    while (42)
    {
        std::cout << "-";
        if(!std::getline(std::cin, input))
            break;
        if (input == "ADD")
        {
            phonebook.add_contact();
            count++;
        }
        else if (input == "SEARCH")
        {
            if (!phonebook.search())
                break;
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << "You can ADD, SEARCH, or EXIT" << std::endl;
    }

}