/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:15:09 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/31 05:22:03 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

DiamondTrap::DiamondTrap() :FragTrap(), ScavTrap(){
		std::cout <<"DiamondTrap " << "default constructor called :)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrapPoint)
    :ClapTrap() , FragTrap(diamondTrapPoint), ScavTrap(diamondTrapPoint) {
    *this = diamondTrapPoint; // Copy the name
    std::cout << "DiamondTrap copy constructor called :)" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &DiamondTrapPoint){
	if (this != &DiamondTrapPoint)
		this->name = DiamondTrapPoint.name;
	return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/

void DiamondTrap::whoAmI() {
    std::cout << " My name is : " << name << " ClapTrap name is " << ClapTrap::name <<  std::endl;
}
/*-------------------------------------------------------------------------------------------*/

DiamondTrap::DiamondTrap(const std::string &diamondName) :FragTrap(diamondName), ScavTrap(diamondName) {
        name = diamondName;
		ClapTrap::name = diamondName + "_clap_name";
        std::cout << "DiamondTrap constructor called :)" << std::endl;
    }

/*--------------------------------------------------------------------------------------------*/
