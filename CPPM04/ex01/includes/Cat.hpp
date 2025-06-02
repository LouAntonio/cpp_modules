/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:12:20 by lantonio          #+#    #+#             */
/*   Updated: 2025/05/21 11:40:16 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		
		void makeSound() const;
};

#endif