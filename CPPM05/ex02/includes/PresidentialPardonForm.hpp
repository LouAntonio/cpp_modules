/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:57:51 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/03 10:01:39 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

class PresidentialPardonForm {
	private:
		std::string name;
		const int   to_sign;
		const int   to_exec;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _name);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm();
};

#endif