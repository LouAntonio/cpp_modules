/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:30:55 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/21 11:57:23 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
    public:
        Dog();
		virtual ~Dog();

		void makeSound() const;
};

#endif