/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/06 20:02:44 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	int					qtd = 2;
	Animal				*animalArr[qtd];
	Cat					*cat;
	Cat					*cat2;
	int					i = -1;

	while (++i < qtd)
	{
		if (i < (qtd / 2))
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
	}
	std::cout << "---" << std::endl;
	cat = new Cat;
	cat->setIdea(12, "Dog's idea here");
	std::cout << "Animal 1 idea = " << cat->getIdea(12) << std::endl;
	cat2 = new Cat(*cat);
	std::cout << "Animal 2 idea = " << cat2->getIdea(12) << std::endl;
	std::cout << "---" << std::endl;
	i = -1;
	while (++i < qtd)
	{
		if (i < (qtd / 2))
		{
			std::cout << "Animal " << i << " type = " << animalArr[i]->getType() << std::endl;
			animalArr[i]->makeSound();
			animalArr[i]->~Animal();
		}
		else
		{
			std::cout << "Animal " << i << " type = " << animalArr[i]->getType() << std::endl;
			animalArr[i]->makeSound();
			animalArr[i]->~Animal();
		}
	}

	return (0);
}
