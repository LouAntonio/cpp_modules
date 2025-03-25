/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:11:09 by lantonio          #+#    #+#             */
/*   Updated: 2025/01/23 11:44:31 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "String memmory adress: " << &str << std::endl;
	std::cout << "StringPTR memmory adress: " << stringPTR << std::endl;
	std::cout << "StringREF memmory adress: " << &stringREF << std::endl;
	std::cout << "---" << std::endl;
	std::cout << "String: " << str << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	return (0);
}
