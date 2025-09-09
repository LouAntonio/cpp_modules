/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/08 16:57:49 by lantonio         ###   ########.fr       */
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
		Bureaucrat				b1 =  Bureaucrat("LouAntonio", 137);
		ShrubberyCreationForm	*s1 = new ShrubberyCreationForm("alvo");

		std::cout << "---" << std::endl;
		ShrubberyCreationForm	s2 = *s1;
		std::cout << "---" << std::endl;
		
		b1.signForm(*s1);
		s1->execute(b1);
		
		std::cout << "---" << std::endl;
		delete	s1;
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
