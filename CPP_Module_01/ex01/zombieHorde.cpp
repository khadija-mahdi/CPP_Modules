/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:54:25 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/22 10:28:42 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N <= 0)
		exit (1);
	Zombie *Zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		Zombies[i].setName(name);
	return Zombies;
}