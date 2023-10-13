/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:16:12 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/31 05:18:12 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CPP
#define SCAVTRAP_CPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"


class ScavTrap :virtual public ClapTrap{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	ScavTrap(); // ---> default constructor
	ScavTrap(const ScavTrap &ScavTrapPoint); // ---> copy constructor 
	ScavTrap &operator=(const ScavTrap &ScavTrapPoint); //--> Copy assignment operator 
	~ScavTrap();// destructor

/*-------------------------------------------------------------------------------*/
    ScavTrap(std::string);

    void attack(const std::string& target); // Override

    void guardGate();

};
#endif