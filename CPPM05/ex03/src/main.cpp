/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 09:18:22 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(void)
{
	try {
		AForm		*test;
		Intern		lantonio;
		Bureaucrat	*b = new Bureaucrat("lantonio", 2);
		std::cout << "---" << std::endl;

		std::cout << std::endl << "--- TESTES BUROCRATA ---" << std::endl;
		test = lantonio.makeForm("RobotomyRequestForm ", "ladrao");

		std::cout << std::endl << "--- TESTES FORMULÁRIOS ---" << std::endl;
		test->beSigned(*b);
		test->execute(*b);

		std::cout << "---" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
