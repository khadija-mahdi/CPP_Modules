/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:47:51 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/18 20:37:05 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(const std::string &new_type): type(new_type){
}

Weapon::~Weapon(){
}

void Weapon::setType(const std::string &_new) {
    type = _new;
}

const std::string& Weapon::getType()const{
	return type;
}

