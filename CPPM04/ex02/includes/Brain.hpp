/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:05:35 by lantonio          #+#    #+#             */
/*   Updated: 2025/06/05 09:54:27 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain (const Brain &src);
		Brain &operator=(const Brain &src);
		virtual ~Brain();

		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

#endif