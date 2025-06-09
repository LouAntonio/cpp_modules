/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:12:20 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/09 11:50:53 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		virtual ~Cat();
		
		void makeSound() const;
		void setIdea(int i, std::string idea);
		std::string getIdea(int i) const;
};

#endif