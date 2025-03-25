/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:44:49 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/18 01:43:34 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook(){};
		void    addContact(void);
		void    searchContact(void);
		void	printMenu(void);

	private:
		static const int	maxContacts = 8;
		Contact				contacts[maxContacts];
		int					qtdContacts;
		std::string 		truncateString(const std::string &str);
};
 
#endif