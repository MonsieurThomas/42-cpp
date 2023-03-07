#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: Form("PresidentialPardonForm", 25, 5, target)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
    *this = copy;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &rhs)
{
    if (this != &rhs)
    	return (*this);
    return (*this);
}

void PresidentialPardonForm::getExecuted() const
{
    std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
