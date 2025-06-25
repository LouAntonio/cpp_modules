/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:30:25 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	
	// Animal animal = new Animal();
	// (void)animal;

	Animal *cat = new Cat();
	Animal *dog = new Dog();

	(void)cat;
	(void)dog;

	std::cout << "\n--- DESTRUIDORES ---" << std::endl;
	//delete animal;
	delete cat;
	delete dog;
	return (0);
}
