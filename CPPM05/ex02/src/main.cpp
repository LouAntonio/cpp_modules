/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/16 11:42:44 by lantonio         ###   ########.fr       */
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
		Bureaucrat				b1 =  Bureaucrat("LouAntonio", 30);
		Bureaucrat				b2 =  Bureaucrat("Burocrata", 3);
		ShrubberyCreationForm	*s1 = new ShrubberyCreationForm("tree.txt");
		RobotomyRequestForm		*r1 = new RobotomyRequestForm("psychopath");
		PresidentialPardonForm *p1 = new PresidentialPardonForm("stealer");

		ShrubberyCreationForm	*s2 = new ShrubberyCreationForm("tree2.txt");
		RobotomyRequestForm		*r2 = new RobotomyRequestForm("psychopath2");
		PresidentialPardonForm *p2 = new PresidentialPardonForm("stealer2");
		std::cout << "---" << std::endl;

		std::cout << std::endl << "--- TESTES BUROCRATA ---" << std::endl;
		b1.signForm(*s1);
		b1.executeForm(*s1);
		b1.signForm(*s1);

		std::cout << std::endl << "--- TESTES FORMULÁRIOS ---" << std::endl;
		s2->beSigned(b2);
		r2->beSigned(b2);
		p2->beSigned(b2);
		s2->execute(b2);
		r2->execute(b2);
		p2->execute(b2);

		std::cout << "---" << std::endl;
		delete	s1;
		delete	r1;
		delete	p1;
		delete	s2;
		delete	r2;
		delete	p2;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
