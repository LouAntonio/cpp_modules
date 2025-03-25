/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:19 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/30 09:44:36 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

void	unknown(void)
{
	ClapTrap unknown("unknown");

	unknown.attack("hmateque");
	unknown.attack("aquissan");
	unknown.attack("ansebast");
}

void	lantonio(void)
{
	ClapTrap	lantonio("lantonio");

	while (lantonio.getHitPoints())
	{
		lantonio.takeDamage(2);
		lantonio.beRepaired(2);
	}
	lantonio.takeDamage(1);
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