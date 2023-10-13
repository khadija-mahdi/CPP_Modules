/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:50:24 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/07 21:50:37 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string str;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for(int i = 1; i < argc; i++)
	{
		str = argv[i];
		for (size_t index = 0; index < str.length(); index++)
		{
			str[index] = std::toupper(str[index]);
			std::cout << str[index];
		}
	}
}
