/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:16:12 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/31 04:51:04 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTrap_CPP
#define SCAVTrap_CPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
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