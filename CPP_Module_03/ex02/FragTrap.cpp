/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:03:18 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 21:49:56 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

FragTrap::FragTrap():ClapTrap(){
		name = "someone";
		hitPoints = 100;
		energyPoints = 100; 
		attackDamage = 30;
		std::cout <<"FragTrap " << "default constructor called :)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrapPoint) :ClapTrap(FragTrapPoint) {
	*this = FragTrapPoint;
}

FragTrap& FragTrap::operator=(const FragTrap &FragTrapPoint){
	if (this != &FragTrapPoint)
	{
		this->name = FragTrapPoint.name;
		this->hitPoints = FragTrapPoint.hitPoints;
		this->energyPoints = FragTrapPoint.energyPoints;
		this->attackDamage = FragTrapPoint.attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/
/*                     parameters constructor                                                */
/*-------------------------------------------------------------------------------------------*/

FragTrap::FragTrap(std::string s):ClapTrap(s){
		name = s;
		hitPoints = 100;
		energyPoints = 100; 
		attackDamage = 30;
		std::cout <<"FragTrap " << "parameters constructor called :)" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/
/*                       member functions                                                    */
/*-------------------------------------------------------------------------------------------*/

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}

/*--------------------------------------------------------------------------------------------*/
