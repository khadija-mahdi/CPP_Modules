#include "ICharacter.hpp"
#include "AMateria.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

ICharacter::ICharacter(){
}

ICharacter::ICharacter(const ICharacter &ICharacter){
	*this = ICharacter;
}

ICharacter& ICharacter::operator=(const ICharacter &ICharacter){
	if (this != &ICharacter)
		this->operator=(ICharacter);
	return *this;
}

ICharacter::~ICharacter() {
}

/*-------------------------------------------------------------------------------------------*/