/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:03:11 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/22 10:42:40 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA():name("Chiwahed"), _Weapon(club){
}

HumanA::~HumanA(){
}

HumanA::HumanA(const std::string &_name, Weapon &club) :name(_name), _Weapon(club){
}

void HumanA::attack() {
    std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}