/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:53:49 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/19 13:26:06 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **argv){
	Harl harl;

	if (ac == 2)
	{
		harl.complain(argv[1]);
		return 0;
	}
	std::cout << "worng arguments !" << std::endl;
}
