#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

const std::string	Intern::names[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
const Function	    Intern::forms[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};


Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &copy)
{
    *this = copy;
}
Intern  &Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
    	return (*this);
    return (*this);
}

Form*	Intern::ShrubberyCreation(const std::string& target) const {
	return new ShrubberyCreationForm(target);
}

Form*	Intern::RobotomyRequest(const std::string& target) const {
	return new RobotomyRequestForm(target);
}

Form*	Intern::PresidentialPardon(const std::string& target) const {
	return new PresidentialPardonForm(target);
}

Form    *Intern::makeForm(std::string const &form, std::string const &target) const
{
  	for (int i = 0; i < 3; i++)
		if (names[i] == form)
		{
    		std::cout << "Intern creates " << form << std::endl;
			return (this->*(forms[i]))(target);
		}
    std::cout << "The intern could not find a form with this formName: " << form << std::endl;
    return 0;
}
