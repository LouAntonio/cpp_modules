/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:10:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/09 12:01:38 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	// Animal		*animal;
	// animal = new Animal();
	// std::cout << animal->getType() << std::endl;
	// delete animal;

	Dog			*dog = new Dog();
	Cat			*cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getIdea(123) << std::endl;

	delete dog;
	delete cat;

    return 0;
}
