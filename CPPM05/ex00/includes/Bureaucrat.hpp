/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:58:18 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/01 09:09:30 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &src);
		virtual ~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void);
		void		incrementGrade(void);
		void		decrementGrade(void);
};

#endif