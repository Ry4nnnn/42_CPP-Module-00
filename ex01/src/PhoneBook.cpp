/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:21:33 by welim             #+#    #+#             */
/*   Updated: 2023/04/11 21:10:55 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_index = 0;
}

PhoneBook::~PhoneBook() {
	
}

// static std::string add_contact(field)

static std::string	get_input(std::string field)
{
	std::string input;
	while (input.empty())
	{
		std::cout << field;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << RED << "input is empty" << std::endl << RESET;
	}
	return (input);
}

void	PhoneBook::add()
{
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		phonenumber;
	std::string		darkestsecret;

	firstname = get_input("First Name: ");
	lastname = get_input("Last Name: ");
	nickname = get_input("Nickname: ");
	phonenumber = get_input("Phone Number: ");
	darkestsecret = get_input("Darkest Secret: ");
	_index %= 8;
	_contact[_index].add_contact(firstname, lastname, nickname, phonenumber, darkestsecret);
	_index++;
	std::cout << YELLOW << "Added to PhoneBook ~" << std::endl << RESET;
}

static std::string print_check(std::string s)
{
	std::string str;

	str = s;
	if (str.length() >= 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void	PhoneBook::print_contact(PhoneBook phonebook)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name| Last Name|  Nickname|" << std::endl; 
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setfill(' ')
		<< "|" << std::setw(10) << i + 1 << "|"
		<< std::setw(10) << print_check(phonebook._contact[i].get_firstname()) << "|"
		<< std::setw(10) << print_check(phonebook._contact[i].get_lastname()) << "|"
		<< std::setw(10) << print_check(phonebook._contact[i].get_nickname()) << "|"
		<< std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void	PhoneBook::print_one_contact(PhoneBook phonebook, std::string index)
{
	int i = index[0] -= 48;
	if (i <= 0 || i >= 9)
	{
		std::cout << RED << "INVALID INDEX" << RESET << std::endl;
		return ;
	}
	i -= 1;
	std::cout << WHITE << "First Name: " << phonebook._contact[i].get_firstname() << std::endl;
	std::cout << WHITE << "Last Name: " << phonebook._contact[i].get_lastname() << std::endl;
	std::cout << WHITE << "Nickname: " << phonebook._contact[i].get_nickname() << std::endl;
	std::cout << WHITE << "Phone Number: " << phonebook._contact[i].get_phonenumber() << std::endl;
	std::cout << WHITE << "Darkest Secret: " << phonebook._contact[i].get_darkestsecret() << std::endl;
}

void	PhoneBook::search(PhoneBook phonebook) {
	std::string index;

	if (this->_contact[0].is_empty())
	{
		std::cout << WHITE << "No contact to display" << std::endl << RESET;
		return ;
	}
	print_contact(phonebook);
	std::cout << MAGENTA << "Input index > " << RESET;
	std::getline(std::cin, index);
	if (!index.empty())
		print_one_contact(phonebook, index);
}

void	PhoneBook::exit()
{
	std::cout << GREEN << "Exit Successful" << std::endl << RESET;
	std::exit(EXIT_SUCCESS);
}