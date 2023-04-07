/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:01:12 by welim             #+#    #+#             */
/*   Updated: 2023/04/07 18:04:02 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "PhoneBook.hpp"

static void	show_instructions()
{
	std::cout << CYAN;
	std::cout << "==========List==========" << std::endl;
	std::cout << "1. ADD: save a new contact" << std::endl;
	std::cout << "2. SEARCH: display all contacts" << std::endl;
	std::cout << "3. EXIT: exits the program" << std::endl;
	std::cout << RESET;
}

int main(void)
{
	PhoneBook      phonebook;
	std::string     cmd;

	show_instructions();
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << RED;
			std::cout << "Error!" << std::endl;
			std::cout << RESET;
			std::exit(EXIT_FAILURE);
		}
		if (cmd.compare("ADD") == 0)
			phonebook.add();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.search();
		else if (cmd.compare("EXIT") == 0)
			phonebook.exit();
		else if (cmd.empty())
			continue;
		else
		{
			std::cout << RED;
			std::cout << "Error: Command Not Found" << std::endl;
			std::cout << RESET;
		}
	}
	return (0);
}