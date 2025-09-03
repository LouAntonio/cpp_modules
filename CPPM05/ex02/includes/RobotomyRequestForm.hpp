/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:53:56 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/03 10:01:29 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

class RobotomyRequestForm {
	private:
		std::string name;
		const int   to_sign;
		const int   to_exec;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _name);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm();
};

#endif