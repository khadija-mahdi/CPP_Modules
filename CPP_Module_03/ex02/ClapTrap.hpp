/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:08:41 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/31 01:08:18 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_CPP
#define ClapTrap_CPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class ClapTrap{
protected:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	ClapTrap(); // ---> default constructor
	ClapTrap(const ClapTrap &ClapTrapPoint); // ---> copy constructor 
	ClapTrap &operator=(const ClapTrap &ClapTrapPoint); //--> Copy assignment operator 
	~ClapTrap();// destructor

/*-------------------------------------------------------------------------------*/

/*---------------------------------------------------*/
	ClapTrap(std::string s); // parameters constructor 
/*---------------------------------------------------*/

/*-----------------------------------------*/
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
/*----------------------------------------*/

};
#endif