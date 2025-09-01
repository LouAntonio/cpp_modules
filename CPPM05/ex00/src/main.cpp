/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:06:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/09/01 09:37:26 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *Burocrata = new Bureaucrat("LouAntonio", -12);

	std::cout  << "Nome = " << Burocrata->getName() << " Grade = " << Burocrata->getGrade();
}