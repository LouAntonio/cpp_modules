/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:19 by lantonio          #+#    #+#             */
/*   Updated: 2025/04/11 15:45:42 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

void	unknown(void)
{
	FragTrap unknown("unknown");

	unknown.attack("hmateque");
	unknown.attack("aquissan");
	unknown.attack("ansebast");
}

void	lantonio(void)
{
	FragTrap	lantonio("lantonio");

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