/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/01 12:12:24 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat *Burocrata = new Bureaucrat("LouAntonio", 12);
		//std::cout  << "Nome = " << Burocrata->getName() << " Grade = " << Burocrata->getGrade() << std::endl;
		std::cout << *Burocrata << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
