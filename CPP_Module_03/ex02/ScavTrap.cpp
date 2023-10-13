/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:25:56 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/31 04:54:14 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

ScavTrap::ScavTrap():ClapTrap(){
		name = "someone";
		hitPoints = 100;
		energyPoints = 50; 
		attackDamage = 20;
		std::cout <<"ScavTrap " << "default constructor called :)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrapPoint) :ClapTrap(ScavTrapPoint) {
	*this = ScavTrapPoint;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ScavTrapPoint){
	if (this != &ScavTrapPoint)
	{
		this->name = ScavTrapPoint.name;
		this->hitPoints = ScavTrapPoint.hitPoints;
		this->energyPoints = ScavTrapPoint.energyPoints;
		this->attackDamage = ScavTrapPoint.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/

void ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << name << " attacks " << target << "." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
/*-------------------------------------------------------------------------------------------*/

ScavTrap::ScavTrap(std::string s):ClapTrap(s){
		name = s;
		hitPoints = 100;
		energyPoints = 50; 
		attackDamage = 20;
		std::cout <<"ScavTrap " << "parameters constructor called :)" << std::endl;
}

/*--------------------------------------------------------------------------------------------*/