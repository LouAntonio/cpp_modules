/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:40:31 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/23 09:35:07 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void announce( void );
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif