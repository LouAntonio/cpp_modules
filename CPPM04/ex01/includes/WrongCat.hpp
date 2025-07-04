/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:42:00 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/20 13:03:50 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &src);
		virtual ~WrongCat();

		void makeSound() const;
};

#endif