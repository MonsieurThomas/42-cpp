#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;


    std::cout << std::endl;
    std::cout << "This is the adresses" << std::endl;
    std::cout << &string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << std::endl;
    std::cout << "This is the values" << std::endl;
    std::cout << string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}