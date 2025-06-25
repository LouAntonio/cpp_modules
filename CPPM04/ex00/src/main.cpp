/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:21:14 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{

	std::cout << "\n--- CONSTRUTORES ---" << std::endl;
    const Animal 		*animal = new Animal();
	const Animal 		*dog = new Dog();
	const Animal 		*cat = new Cat();

	std::cout << "\n--- WRONG CONSTRUTORES ---" << std::endl;
	const WrongAnimal	*wrongAnimal = new WrongAnimal();
	const WrongAnimal	*wrongCat2 = new WrongAnimal();
	const WrongCat		*wrongCat = new WrongCat();

	std::cout << "\n--- TIPOS ---" << std::endl;

	std::cout << "Animal type " << animal->getType() << std::endl;
	std::cout << "Dog type " << dog->getType() << std::endl;
	std::cout << "Cat type " << cat->getType() << " " << std::endl;

	std::cout << "\n--- SONS ---" << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	std::cout << "\n--- WRONG TIPOS ---" << std::endl;
	std::cout << "WrongAnimal type " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "WrongCatAnimal type " << wrongCat2->getType() << " " << std::endl;
	std::cout << "WrongCat type " << wrongCat->getType() << " " << std::endl;

	std::cout << "\n--- WRONG SONS ---" << std::endl;
	wrongAnimal->makeSound();
	wrongCat2->makeSound();
	wrongCat->makeSound();

	std::cout << "\n--- DESTRUTORES ---" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat2;
	delete wrongCat;

    return (0);
}
