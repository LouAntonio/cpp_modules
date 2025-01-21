/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:13:55 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/21 12:24:17 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Announce( void )
{
	std::cout << "" << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
