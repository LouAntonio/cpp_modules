/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:19 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/20 10:38:34 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

void	unknown(void)
{
	ScavTrap unknown("unknown");

	unknown.attack("hmateque");
	unknown.attack("aquissan");
	unknown.attack("ansebast");
	unknown.guardGate();
}

void	lantonio(void)
{
	ScavTrap	lantonio("lantonio");

	lantonio.guardGate();
	while (lantonio.getHitPoints())
	{
		lantonio.takeDamage(15);
		lantonio.beRepaired(5);
	}
	lantonio.guardGate();
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