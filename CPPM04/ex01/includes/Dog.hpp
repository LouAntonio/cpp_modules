/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:30:55 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/05 12:02:02 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
    private:
        Brain *brain;

    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
		virtual ~Dog();

		void makeSound() const;
        void setIdea(int i, std::string idea);
        std::string getIdea(int i) const;
};

#endif