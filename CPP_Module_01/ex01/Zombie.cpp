/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:54:33 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/15 19:30:23 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string new_zom){
	name = new_zom;
}

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << name << " is destroyed !!" << std::endl;
}

void Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
