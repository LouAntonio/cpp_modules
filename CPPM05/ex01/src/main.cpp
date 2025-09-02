/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/02 11:36:39 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat			b1 =  Bureaucrat("LouAntonio", 6);								// default named
		Form				f1 = Form();														// default
		Form				f2 = Form("inscricao", false, 5, 2);								// default named
		Form				f3 = Form(f2);														// cpy constructor
		Form f4;
		f4 = f1;																				// assignment operator
		std::cout << "---" << std::endl;

		std::cout << f2 << std::endl;															// overload operator
		std::cout << "---" << std::endl;
		b1.signForm(f2);																		// Bureaucrat signForm (with Form beSigned inside)
		std::cout << "---" << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
