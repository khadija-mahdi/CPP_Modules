#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "AMateria.hpp"

class Cure;
class Cure : public AMateria{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Cure(); // ---> default constructor
	Cure(const Cure &Cure); // ---> copy constructor 
	Cure &operator=(const Cure &Cure); //--> Copy assignment operator 
	virtual ~Cure();// destructor

/*-------------------------------------------------------------------------------*/
	Cure(std::string const & name); // parameters constructor
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const ;
};
#endif