#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class Phonebook
{
    private:
        Contact contact[8];
        int count;

    public:
        Phonebook();
        ~Phonebook();
        void    add_contact();
        int     search();

};

#endif