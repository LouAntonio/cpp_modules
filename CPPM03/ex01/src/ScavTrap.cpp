/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:52:35 by lantonio          #+#    #+#             */
/*   Updated: 2025/04/11 15:36:14 by lantonio         ###   ########.fr       */
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
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setDamage(src.getDamage());
    return (*this);
}
