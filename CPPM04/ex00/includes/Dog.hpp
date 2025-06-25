/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:30:55 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/18 10:55:45 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		virtual ~Dog();

		void makeSound() const;
};

#endif