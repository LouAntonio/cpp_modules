/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:45:11 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/03 10:01:09 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>

class ShrubberyCreationForm {
	private:
		std::string name;
		const int   to_sign;
		const int   to_exec;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _name);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm();
};

#endif