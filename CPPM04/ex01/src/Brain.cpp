/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:10:21 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/21 16:32:08 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain default copy construtor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain default assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	for (int i = 0; i < 100; i++)
		if (src.ideas[i].length() > 0)
			this->ideas[i].assign(src.ideas[i]);
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain default destructor called" << std::endl;
}

std::string Brain::getIdea(int i) const {
	if (i >= 0 || i <= 99)
		return (this->ideas[i]);
	return ("Error\nIndex out if ideas range!");
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 || i <= 99)
	{
		if (!idea.empty() && idea != nullptr)
		{
			this->ideas[i] = idea;
			std::cout << "Idea successfully setted!" << std::endl;
		}
		else
			std::cout << "Error\nIdea empty or null!" << std::endl;
	}
	else
		std::cout << "Error\nIndex out of range!" << std::endl;
}
