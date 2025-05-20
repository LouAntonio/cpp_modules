/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:19 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/20 10:43:24 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

void	unknown(void)
{
	FragTrap unknown("unknown");

	unknown.attack("hmateque");
	unknown.attack("aquissan");
	unknown.attack("ansebast");
	unknown.guardGate();
}

void	lantonio(void)
{
	FragTrap	lantonio("lantonio");

	lantonio.guardGate();
	lantonio.highFivesGuys();
	while (lantonio.getHitPoints())
	{
		lantonio.attack("hmateque");
		lantonio.takeDamage(20);
		lantonio.beRepaired(10);
	}
	lantonio.guardGate();
	lantonio.highFivesGuys();
}

int	main(void)
{
	std::cout << "Unknown tests" << std::endl;
	std::cout << "-------------" << std::endl;
	unknown();
	std::cout << std::endl << "Lantonio tests" << std::endl;
	std::cout << "--------------" << std::endl;
	lantonio();
}
