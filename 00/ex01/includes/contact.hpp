/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:45:15 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/18 02:48:09 by lantonio         ###   ########.fr       */
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
        std::string	firstName;
        std::string	lastName;
        std::string	nickName;
        std::string	phoneNumber;
        std::string	darkestSecret;
};

#endif