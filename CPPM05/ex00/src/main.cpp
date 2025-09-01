/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/01 11:00:50 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat *Burocrata = new Bureaucrat("LouAntonio", 150);
		std::cout  << "Nome = " << Burocrata->getName() << " Grade = " << Burocrata->getGrade() << std::endl;
		Burocrata->decrementGrade();
		std::cout  << "New grade = " << Burocrata->getGrade() << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
