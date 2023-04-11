/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:59:44 by welim             #+#    #+#             */
/*   Updated: 2023/04/11 20:42:25 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//----------COLOURS----------//
/* Regular */
# define RESET		"\033[0m"
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define MAGENTA	"\033[0;35m"
# define CYAN		"\033[0;36m"
# define WHITE		"\033[0;37m"

class   PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search(PhoneBook phonebook);
		void exit();
		void print_contact(PhoneBook phonebook);
		void print_one_contact(PhoneBook phonebook, std::string i);
	private:
		Contact _contact[8];
		int _index;
};
