/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:10:21 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:08:19 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain default copy construtor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain default assignment operator called" << std::endl;
	if (this != &src)
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain default destructor called!" << std::endl;
}

std::string Brain::getIdea(int i) const {
	if (i >= 0 && i <= 99)
		return (this->ideas[i]);
	return ("Error\nIndex out of ideas range!");
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i <= 99)
	{
		this->ideas[i] = idea;
		std::cout << "Idea successfully setted!" << std::endl;
	}
	else
		std::cout << "Error\nIndex out of range!" << std::endl;
}
