#include "AMateria.hpp"
#include "ICharacter.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

AMateria::AMateria(){ // ---> default constructor
	type = "default";
}

AMateria::AMateria(const AMateria &AMateria){// ---> copy constructor 
	*this = AMateria;
}

AMateria& AMateria::operator=(const AMateria &AMateria){
	//--> Copy assignment operator 
	if (this != &AMateria)
	{
		this->type = AMateria.type;
	}
	return *this;
}

AMateria::~AMateria() { // destructor
}

/*-------------------------------------------------------------------------------------------*/

AMateria::AMateria(std::string const & type):type(type){ 
	// parameters constructor
} 

std::string const & AMateria::getType() const{ //Returns the materia type
	return type;
}

void AMateria::use(ICharacter& target){
	(void)target;
}