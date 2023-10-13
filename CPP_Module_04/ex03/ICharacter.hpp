#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "AMateria.hpp"

class AMateria;
class ICharacter{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	ICharacter(); // ---> default constructor
	ICharacter(const ICharacter &ICharacter); // ---> copy constructor 
	ICharacter &operator=(const ICharacter &ICharacter); //--> Copy assignment operator 
	virtual ~ICharacter();// destructor

/*-------------------------------------------------------------------------------*/
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif