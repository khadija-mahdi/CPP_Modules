#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "AMateria.hpp"

class Ice;
class Ice : public AMateria{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Ice(); // ---> default constructor
	Ice(const Ice &Ice); // ---> copy constructor 
	Ice &operator=(const Ice &Ice); //--> Copy assignment operator 
	virtual ~Ice();// destructor

/*-------------------------------------------------------------------------------*/
	Ice(std::string const & name); // parameters constructor
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const;
};
#endif