/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:01:28 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 22:38:55 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	FragTrap(); // ---> default constructor
	FragTrap(const FragTrap &FragTrapPoint); // ---> copy constructor 
	FragTrap &operator=(const FragTrap &FragTrapPoint); //--> Copy assignment operator 
	~FragTrap();// destructor

/*-------------------------------------------------------------------------------*/
    FragTrap(std::string);

    void highFivesGuys(void);

};
#endif