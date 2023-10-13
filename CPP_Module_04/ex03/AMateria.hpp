/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:05:59 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/07 02:33:13 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "ICharacter.hpp"

class ICharacter;
class Character;

class AMateria{
protected:
	std::string type;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	AMateria(); // ---> default constructor
	AMateria(const AMateria &AMateria); // ---> copy constructor 
	AMateria &operator=(const AMateria &AMateria); //--> Copy assignment operator 
	virtual ~AMateria();// destructor

/*-------------------------------------------------------------------------------*/
	AMateria(std::string const & type); // parameters constructor
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif