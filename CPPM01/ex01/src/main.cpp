/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:40:50 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/23 10:03:51 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <iostream>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	int			N = 3;
	std::string	name = "Zombie";
	if (ac >= 2)
		N = ft_atoi(av[1]);
	if (ac >= 3)
		name = std::string(av[2]);
	Zombie *zombie = zombieHorde(N, name);
	while (N-- > 0)
		zombie[N].announce();
	for (int i = 0; i < N; ++i)
		zombie[i].~Zombie();
	delete [] zombie;
	return (0);
}
