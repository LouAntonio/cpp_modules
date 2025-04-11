/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:26:59 by lantonio          #+#    #+#             */
/*   Updated: 2025/04/11 15:41:55 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void): ScavTrap()
{
    std::cout << "FragTrap " << this->getName() << " default constructor!" << std::endl;
}

FragTrap::FragTrap(std::string name): ScavTrap(name)
{
    std::cout << "FragTrap " << this->getName() << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ScavTrap(copy)
{
    std::cout << "FragTrap " << this->getName() << " copied!" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
    std::cout << "FragTrap " << this->getName() << " assigned!" << std::endl;
    if (this != &copy)
    {
        this->setName(copy.getName());
        this->setHitPoints(copy.getHitPoints());
        this->setEnergyPoints(copy.getEnergyPoints());
    }
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->getName() << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " is requesting a high five!" << std::endl;
}
