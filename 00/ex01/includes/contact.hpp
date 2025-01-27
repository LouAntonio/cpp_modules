/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:45:15 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/27 07:51:03 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
#include <limits.h>
#include <iomanip>
#include <stdlib.h>
#include <string>

class Contact {
    public:
        Contact();
        ~Contact();
        void		setFirstName(std::string firstName);
        void		setLastName(std::string lastName);
        void		setNickName(std::string nickName);
        void		setPhoneNumber(std::string phoneNumber);
        void		setDarkestSecret(std::string darkestSecret);
        std::string	getFirstName() const;
        std::string	getLastName() const;
        std::string	getNickName() const;
        std::string	getPhoneNumber() const;
        std::string	getDarkestSecret() const;

    private:
        std::string	firstName;
        std::string	lastName;
        std::string	nickName;
        std::string	phoneNumber;
        std::string	darkestSecret;
};

#endif