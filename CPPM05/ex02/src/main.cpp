/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 12:40:37 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat				b1 =  Bureaucrat("LouAntonio", 6);
		AForm					*s1 = new ShrubberyCreationForm("alvo");
		AForm					*r1 = new RobotomyRequestForm("psychopath");
		AForm					*p1 = new PresidentialPardonForm("burglar");
		std::cout << "---" << std::endl;
		
		
		s1->execute(b1);
		b1.signForm(*s1);
		b1.signForm(*r1);
		b1.signForm(*p1);
		s1->execute(b1);
		r1->execute(b1);
		p1->execute(b1);
		std::cout << "---" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
