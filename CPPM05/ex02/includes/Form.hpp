/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:24:32 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 09:02:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		bool				_signed;
		const int			grade_to_sign;
		const int			grade_to_exec;

	public:
		Form();
		Form(std::string _name, bool is_signed, int to_sign, int to_exec);
		Form(const Form &src);
		Form &operator=(const Form &src);
		virtual ~Form();

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;

		void		beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &outputStream, const Form &f);

#endif