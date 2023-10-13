/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:54:36 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/20 11:23:42 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(void)
{
	Zombie *zombie = zombieHorde(5, "kmahdi");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();
	delete[] zombie;
}
