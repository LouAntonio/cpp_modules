/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:02:35 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/18 07:56:50 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/phonebook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	phonebook.printMenu();
	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT" || std::cin.eof())
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
