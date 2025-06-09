/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:11:43 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/05 12:09:04 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <stdlib.h>

class Animal {
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();
		
		virtual void makeSound() const;
		std::string getType() const;
};

#endif