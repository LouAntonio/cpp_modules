/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/18 10:03:16 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try {
		AForm		*test;
		Intern		lantonio;
		Bureaucrat	*b = new Bureaucrat("lantonio", 2);
		std::cout << "---" << std::endl;

		std::cout << std::endl << "--- TESTE ESTAGIÁRIO ---" << std::endl;
		test = lantonio.makeForm("robotomy request", "ladrao");

		std::cout << std::endl << "--- TESTES FORMULÁRIO ---" << std::endl;
		test->beSigned(*b);
		test->execute(*b);
		std::cout << "---" << std::endl;
		delete b;
		delete test;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
