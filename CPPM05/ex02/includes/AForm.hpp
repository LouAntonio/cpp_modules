/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:43:58 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/04 13:24:03 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class AForm{
	protected:
		std::string name;
		std::string	target;
		const int   to_sign;
		const int   to_exec;

	public:
		AForm();
		AForm(std::string _name, std::string _target, int _to_sign, int _to_exec);
		AForm(const AForm &src);
		AForm &operator=(const AForm &src);
		virtual ~AForm();

		virtual void	execute(void) = 0;
		std::string		getName(void) const;
		std::string		getTarget(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;
};

#endif