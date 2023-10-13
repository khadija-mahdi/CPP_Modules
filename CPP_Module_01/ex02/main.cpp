/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:33:18 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/20 17:32:02 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable : " << &str << std::endl;
	std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      : " << &stringREF << std::endl << std::endl;

	std::cout << "The value of the string variable  : " <<	str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}