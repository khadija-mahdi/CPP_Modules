/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:00:09 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/22 10:36:44 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(const std::string _name) :name(_name) , _Weapon(NULL){}

HumanB::HumanB(const std::string _name, Weapon club): name(_name) , _Weapon(&club){}

void HumanB::setWeapon(Weapon &club){
	_Weapon = &club;
}

void HumanB::attack() {
	if (_Weapon ==  NULL)
		std::cout << name << " attacks with nothing " << std::endl;
    else
		std::cout << name << " attacks with their " << _Weapon->getType() << std::endl;
}

HumanB::~HumanB(){}