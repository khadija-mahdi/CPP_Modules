/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 03:15:13 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 22:39:26 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
#define DIAMONDTRAP_CPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
private:
	std::string name;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	DiamondTrap(); // ---> default constructor
	DiamondTrap(const DiamondTrap &DiamondTrapPoint); // ---> copy constructor 
	DiamondTrap &operator=(const DiamondTrap &DiamondTrapPoint); //--> Copy assignment operator 
	~DiamondTrap();// destructor

/*-------------------------------------------------------------------------------*/
    DiamondTrap(const std::string& s);
    void whoAmI();
};
#endif