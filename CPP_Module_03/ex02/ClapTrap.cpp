/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:09:29 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 21:15:01 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

ClapTrap::ClapTrap():name("someone"), hitPoints(10), energyPoints(10),attackDamage(0){
		std::cout << "ClapTrap default constructor called :)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrapPoint){
	*this = ClapTrapPoint;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ClapTrapPoint){
	if (this != &ClapTrapPoint)
	{
		this->name = ClapTrapPoint.name;
		this->hitPoints = ClapTrapPoint.hitPoints;
		this->energyPoints = ClapTrapPoint.energyPoints;
		this->attackDamage = ClapTrapPoint.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called :)" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/
/*						parameters constructor */
/*-------------------------------------------------------------------------------------------*/

ClapTrap::ClapTrap(std::string s):name(s), hitPoints(10), energyPoints(10),attackDamage(0){
		std::cout << "ClapTrap parameters constructor called :)" << std::endl;
}

/*--------------------------------------------------------------------------------------------*/
/*                                member function                                             */
/*--------------------------------------------------------------------------------------------*/
void ClapTrap::attack(const std::string& target){

	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		std::cout <<"ClapTrap " << name << " attacks " << target << "." <<  std::endl;
	}
	else
		std::cout <<"ClapTrap " << name << " can't attack " << target << "." << std::endl;

}
void ClapTrap::takeDamage(unsigned int amount){
	
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints-=amount;
		attackDamage += amount;
		std::cout <<"ClapTrap " << name << " take a damage in hit points total damage is: " << attackDamage << std::endl;
	}
	else
		std::cout <<"ClapTrap " << name << " can't take a damage" << "." << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
		
	if (hitPoints > 0 && energyPoints > 0)
	{
		energyPoints--;
		hitPoints+=amount;
		std::cout <<"ClapTrap " << name <<  " is repaired for " << amount << " hit points."  << std::endl;
	}
	else
		std::cout <<"ClapTrap " << name << " can't be repaired." << std::endl;
}
/*----------------------------------------------------------------------------------------------*/