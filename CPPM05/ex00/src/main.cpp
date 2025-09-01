/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/01 12:50:55 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat			b1 =  Bureaucrat();													// default unnamed
		Bureaucrat			b2 =  Bureaucrat("LouAntonio", 150);								// default named
		Bureaucrat			b3 =  Bureaucrat(b2);												// cpy constructor
		std::cout << "---" << std::endl;

		b2.incrementGrade();																	// increment
		b2.decrementGrade();																	// decrement
		std::cout << b3.getName() << ", bureaucrat grade " << b3.getGrade() << std::endl;		// getters
		std::cout << b3 << std::endl;															// << operator overload
		//b2->decrementGrade();																	// exception
		b1 = b2;																				// assignment operator
	} catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
