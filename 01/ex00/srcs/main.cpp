/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:13:16 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/21 12:32:33 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void	randomChump(std::string name)
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("lantonio");
	zombie->announce();
	return (0);
}
