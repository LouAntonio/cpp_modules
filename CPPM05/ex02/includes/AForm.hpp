/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:24:32 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 16:35:06 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		const std::string	target;
		bool				_signed;
		const int			to_sign;
		const int			to_exec;

	public:
		AForm();
		AForm(std::string _name, std::string _target, bool is_signed, int to_sign, int to_exec);
		AForm(const AForm &src);
		AForm &operator=(const AForm &src);
		virtual ~AForm();

		std::string		getName(void) const;
		std::string		getTarget(void) const;
		bool			getSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExec(void) const;

		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &outputStream, const AForm &f);

#endif
