/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:21:33 by welim             #+#    #+#             */
/*   Updated: 2023/04/07 17:17:41 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {
	
}

static std::string	get_input(std::string field)
{
	std::string input;
	std::cout << field;
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.fail())
	{
		std::cout << RED;
		std::cout << "Error!" << std::endl;
		std::cout << RESET;
		std::exit(EXIT_FAILURE);
	}
	else
	{
		std::cout << RED;
		std::cout << "Error: Invalid input" << std::endl;
		std::cout << RESET;
	}
	return (input);
}

void	PhoneBook::add() {
	std::string		field[5];
	field[0] = get_input("First Name: ");
	field[1] = get_input("Last Name: ");
	field[2] = get_input("Nickname: ");
	field[3] = get_input("Phone Number: ");
	field[4] = get_input("Darkest Secret: ");
	std::cout << "Added to PhoneBook" << std::endl;
}

void	PhoneBook::search() {
	std::cout << "SEARCH" << std::endl;
	std::exit(EXIT_SUCCESS);
}

void	PhoneBook::exit() {
	std::cout << GREEN;
	std::cout << "Exit Successful" << std::endl;
	std::cout << RESET;
	std::exit(EXIT_SUCCESS);
}