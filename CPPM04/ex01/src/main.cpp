/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/09 10:59:08 by lantonio         ###   ########.fr       */
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
	Dog					*dog;
	int					i = -1;

	while (++i < qtd)
	{
		if (i < (qtd / 2))
		{
			animalArr[i] = new Dog();
			std::cout << "Animal " << i << " type = " << animalArr[i]->getType() << std::endl;
			animalArr[i]->makeSound();
		}
		else
		{
			animalArr[i] = new Cat();
			std::cout << "Animal " << i << " type = " << animalArr[i]->getType() << std::endl;
			animalArr[i]->makeSound();
		}
		delete animalArr[i];
	}

	std::cout << "\n---\n" << std::endl;

	cat = new Cat();
	dog = new Dog();

	cat->setIdea(1, "Cat's idea");
	dog->setIdea(2, "Dat's idea");
	cat->setIdea(-1, "Cat's idea");
	dog->setIdea(101, "Dat's idea");

	std::cout << cat->getIdea(1) << std::endl;
	std::cout << dog->getIdea(2) << std::endl;

	std::cout << cat->getIdea(2) << std::endl;
	std::cout << dog->getIdea(1) << std::endl;

	std::cout << cat->getIdea(-1) << std::endl;
	std::cout << dog->getIdea(101) << std::endl;

	delete cat;
	delete dog;

	return (0);
}
