/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:13:16 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/22 16:31:10 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie *new_zombie;

    randomChump("lantonio");
    new_zombie = newZombie("Foo");
    delete new_zombie;

    return 0;
}
