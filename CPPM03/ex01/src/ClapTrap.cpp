/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:03:04 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/20 10:37:52 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("default"), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap " << this->name << " default constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << this->name << " copied!" << std::endl;
	*this = copy;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ClapTrap " << this->name << " attacked " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else if (!this->energyPoints)
		std::cout << "ClapTrap " << this->name << " is out of energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
		this->hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	if (this->hitPoints < 0)
		this->hitPoints = 0;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints)
	{
		std::cout << "ClapTrap " << this->name << " healed " << amount << " points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead, and cannot be repaired!" << std::endl;
	else if (!this->energyPoints)
		std::cout << "ClapTrap " << this->name << " is out of energy points!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Assignment operator for ClapTrap called!" << std::endl;
	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getDamage();
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

int ClapTrap::getDamage(void) const
{
	return (this->attackDamage);
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}

void ClapTrap::setDamage(int damage)
{
	this->attackDamage = damage;
}
