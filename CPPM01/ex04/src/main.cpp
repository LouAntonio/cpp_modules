/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:56:29 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/24 09:58:34 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string	replaceSubstring(std::string str, std::string oldStr, std::string newStr)
{
    size_t		pos = 0;
    size_t		search = 0;
	std::string	result;

    while ((search = str.find(oldStr, pos)) != std::string::npos)
	{
        result += str.substr(pos, search - pos);
        result += newStr;
        pos = search + oldStr.length();
    }
    result += str.substr(pos);
    return (result);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	if (!file.is_open())
	{
		std::cout << "Error while oppening file!" << std::endl;
		return (1);
	}

	std::ofstream newFile((std::string(av[1]) + ".replace").c_str());
	if (!newFile.is_open())
	{
		std::cout << "Error while creating new file!" << std::endl;
		return (1);
	}
	std::string	line;
	std::string	newLine;
	while (std::getline(file, line))
	{
		newLine = replaceSubstring(line, av[2], av[3]);
		newFile << newLine << std::endl;
	}
	file.close();
	newFile.close();
	return (0);
}
