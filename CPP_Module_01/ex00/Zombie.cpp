/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:49:08 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/20 11:11:45 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_zom) : name(new_zom){
}

Zombie::~Zombie(){
	std::cout << name << " is destroyed !!" << std::endl;
}

void Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}