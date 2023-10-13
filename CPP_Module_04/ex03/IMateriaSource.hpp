#ifndef  IMateriaSource_HPP
#define  IMateriaSource_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "ICharacter.hpp"

class ICharacter;
class Character;

class  IMateriaSource{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	 IMateriaSource(); // ---> default constructor
	 IMateriaSource(const  IMateriaSource & IMateriaSource); // ---> copy constructor 
	 IMateriaSource &operator=(const  IMateriaSource & IMateriaSource); //--> Copy assignment operator 
	virtual ~ IMateriaSource();// destructor

/*-------------------------------------------------------------------------------*/
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif