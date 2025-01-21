/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:36:46 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/16 14:56:57 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    *to_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		std::cout << to_uppercase(av[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
