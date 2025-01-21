/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:49:52 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/21 14:38:26 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook() {
	qtdContacts = 0;
}

int	validatePhoneNumber(std::string phoneNum)
{
	int i;

	i = -1;
	while (phoneNum[++i])
	{
		if (!isdigit(phoneNum[i]))
		{
			std::cout << "Only numbers allowed!" << std::endl;
			return (0);
		}
	}
	return (1);
}

void	PhoneBook::printMenu(void)
{
	std::cout << "ADD - Add a contact to the phonebook" << std::endl;
	std::cout << "SEARCH - Show all contacts" << std::endl;
	std::cout << "EXIT - Leave the app" << std::endl;
}

void    PhoneBook::addContact(void)
{
	if (qtdContacts == maxContacts)
	{
		for (int i = 0; i < maxContacts - 1; i++)
			contacts[i] = contacts[i + 1];
		qtdContacts--;
		std::cout << "Contact list is full, the oldest contact was removed!" << std::endl;
	}
	Contact newContact;
	
	do {
		std::cout << "Enter first name: ";
		std::getline(std::cin, newContact.firstName);
		if (std::cin.eof())
			exit(1);
	} while (newContact.firstName.empty());

	do {
		std::cout << "Enter last name: ";
		std::getline(std::cin, newContact.lastName);
		if (std::cin.eof())
			exit(1);
	} while (newContact.lastName.empty());

	do {
		std::cout << "Enter nickname: ";
		std::getline(std::cin, newContact.nickName);
		if (std::cin.eof())
			exit(1);
	} while (newContact.nickName.empty());

	do {
		std::cout << "Enter phone number: ";
		std::getline(std::cin, newContact.phoneNumber);
		if (std::cin.eof())
			exit(1);
	} while (newContact.phoneNumber.empty() || !validatePhoneNumber(newContact.phoneNumber));
	
	do {
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, newContact.darkestSecret);
		if (std::cin.eof())
			exit(1);
	} while (newContact.darkestSecret.empty());
		
	contacts[qtdContacts++] = newContact;
	std::cout << "Contact added!" << std::endl;
}

std::string PhoneBook::truncateString(const std::string &str)
{
  static const int width = 10;
  if (str.length() > width)
    return str.substr(0, width - 1) + '.';
  return str;
}

void PhoneBook::searchContact(void)
{
    if (qtdContacts == 0)
    {
        std::cout << "No contacts to show!" << std::endl;
        return;
    }

    std::cout << "A lista tem " << qtdContacts << " elementos" << std::endl;

    std::cout << std::setw(10) << "Index" << " | "
		<< std::setw(10) << "First Name" << " | "
		<< std::setw(10) << "Last Name" << " | "
		<< std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < qtdContacts; i++)
    {
        std::cout << std::setw(10) << (i + 1) << " | "
			<< std::setw(10) << truncateString(contacts[i].firstName) << " | "
			<< std::setw(10) << truncateString(contacts[i].lastName) << " | "
			<< std::setw(10) << truncateString(contacts[i].nickName) << std::endl;
    }

	int i;
	while (1)
	{
		std::cout << "Enter  of contact to see it: ";
		std::cin >> i;
		if (std::cin.eof())
			exit(1);
		if (std::cin.fail() || i < 1 || i > qtdContacts)
		{
			std::cout << "Invalid index!" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			break;
		}
		else if (!contacts[i - 1].firstName.empty())
		{
			std::cout << "Index: " 			<< i << std::endl;
			std::cout << "First Name: " 	<< contacts[i - 1].firstName << std::endl;
			std::cout << "Last Name: " 		<< contacts[i - 1].lastName << std::endl;
			std::cout << "Nickname: " 		<< contacts[i - 1].nickName << std::endl;
		}
		else
			std::cout << "Invalid index!" << std::endl;
	}
}
