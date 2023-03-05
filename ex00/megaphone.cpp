/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welim <welim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:38:47 by welim             #+#    #+#             */
/*   Updated: 2023/03/05 23:56:27 by welim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <cctype>

int main(int ac, char **av)
{
	int	i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else
	{
		while (++i < ac)
		{
			int j = 0;
			while (j < (int)strlen(av[i]))
			{
				av[i][j] = toupper(av[i][j]);
				// if (av[i][j] >= 'a' && av[i][j] <= 'z')
				// 	av[i][j] -= 32;
				j++;
			}
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return (0);
}
