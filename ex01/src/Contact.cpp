#include  "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

// add the Class variables accordingly based on the userinput
void	Contact::add_contact(std::string firstname, std::string lastname, 
							std::string nickname, std::string phonenumber,
							std::string darkestsecret)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_phonenumber = phonenumber;
	this->_darkestsecret = darkestsecret;
}

// Returns 1 if the class is empty, else returns 0
int	Contact::is_empty(void)
{
	if (this->_firstname.empty())
        return (1);
    return (0);
}

std::string	Contact::get_firstname(void)
{
	return(_firstname);
}

std::string	Contact::get_lastname(void)
{
	return(_lastname);
}

std::string	Contact::get_nickname(void)
{
	return(_nickname);
}

std::string	Contact::get_phonenumber(void)
{
	return(_phonenumber);
}

std::string	Contact::get_darkestsecret(void)
{
	return(_darkestsecret);
}
