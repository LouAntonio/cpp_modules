/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:11:52 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/24 11:01:42 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl 
{
	private:
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
	public:
		void	complain(std::string level);
};

#endif