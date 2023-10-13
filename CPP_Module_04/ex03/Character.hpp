#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "ICharacter.hpp"

class ICharacter;
class Character : public ICharacter{
private:
    std::string name;
    AMateria* inventory[4]; // Inventory of Materias
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Character(); // ---> default constructor
	Character(const Character &Character); // ---> copy constructor 
	Character &operator=(const Character &Character); //--> Copy assignment operator 
	virtual ~Character();// destructor

/*-------------------------------------------------------------------------------*/
	Character(const std::string &name); // ---> parameters  constructor
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};
#endif