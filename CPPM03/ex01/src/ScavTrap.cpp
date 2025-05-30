/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:52:35 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/30 10:22:10 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("default")
{
    std::cout << "ScavTrap " << this->getName() << " default constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap " << this->getName() << " created!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->getName() << " destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap " << this->getName() << " copied!" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "Assignment operator for ScavTrap called!" << std::endl;
    if (this != &src)
    {
        this->setName(src.getName());
        this->setHitPoints(src.getHitPoints());
        this->setEnergyPoints(src.getEnergyPoints());
        this->setDamage(src.getDamage());
    }
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ScavTrap " << this->name << " attacked " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
	else if (!this->energyPoints)
		std::cout << "ScavTrap " << this->name << " is out of energy points!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints())
    {
        std::cout << "ScavTrap " << this->getName() << " is now in 'Gate Keeper' mode!" << std::endl;
    }
    else if (this->getHitPoints() <= 0)
        std::cout << "ScavTrap " << this->getName() << " is dead, and can't get in 'Gate Keeper' mode!" << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " is out of energy points, and can't get in 'Gate Keeper' mode!" << std::endl;
}
