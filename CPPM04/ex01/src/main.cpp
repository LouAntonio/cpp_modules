/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:22:52 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	int					qtd = 2;
	Animal				*animalArr[qtd];
	Dog					*dog;
	Dog					*dog2;
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

	std::cout << "\n--- CÓPIA PROFUNDA ---" << std::endl;

	dog = new Dog();

	dog->setIdea(0, "Dog's idea 0");
	dog2 = new Dog(*dog);

	std::cout << dog->getIdea(0) << std::endl;
	std::cout << dog2->getIdea(0) << std::endl;

	dog->setIdea(0, "Dog's idea 1");
	std::cout << dog->getIdea(0) << std::endl;
	std::cout << dog2->getIdea(0) << std::endl;

	std::cout << "\n--- DESTRUIDORES ---" << std::endl;

	delete dog;
	delete dog2;

	return (0);
}
