/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:49:52 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/22 14:22:22 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook() {
	qtdContacts = 0;
}

Contact::Contact() {}

Contact::~Contact() {}

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

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickName()
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
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
	
	std::string firstName;
	do {
		std::cout << "Enter first name: ";
		std::getline(std::cin, firstName);
		if (std::cin.eof())
			exit(1);
		newContact.setFirstName(firstName);
	} while (firstName.empty());

	std::string lastName;
	do {
		std::cout << "Enter last name: ";
		std::getline(std::cin, lastName);
		if (std::cin.eof())
			exit(1);
		newContact.setLastName(lastName);
	} while (lastName.empty());

	std::string nickName;
	do {
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickName);
		if (std::cin.eof())
			exit(1);
		newContact.setNickName(nickName);
	} while (nickName.empty());

	std::string phoneNumber;
	do {
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			exit(1);
		newContact.setPhoneNumber(phoneNumber);
	} while (phoneNumber.empty() || !validatePhoneNumber(phoneNumber));

	std::string darkestSecret;
	do {
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
			exit(1);
		newContact.setDarkestSecret(darkestSecret);
	} while (darkestSecret.empty());
		
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
			<< std::setw(10) << truncateString(contacts[i].getFirstName()) << " | "
			<< std::setw(10) << truncateString(contacts[i].getLastName()) << " | "
			<< std::setw(10) << truncateString(contacts[i].getNickName()) << std::endl;
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
		else if (!contacts[i - 1].getFirstName().empty())
		{
			std::cout << "Index: " 			<< i << std::endl;
			std::cout << "First Name: " 	<< contacts[i - 1].getFirstName() << std::endl;
			std::cout << "Last Name: " 		<< contacts[i - 1].getLastName() << std::endl;
			std::cout << "Nickname: " 		<< contacts[i - 1].getNickName() << std::endl;
		}
		else
			std::cout << "Invalid index!" << std::endl;
	}
}
