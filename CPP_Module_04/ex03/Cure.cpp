#include "Cure.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Cure::Cure():AMateria("cure"){ // ---> default constructor
}

Cure::Cure(const Cure &Cure):AMateria(Cure){// ---> copy constructor
	*this = Cure;
}

Cure& Cure::operator=(const Cure& other) {
    //--> Copy assignment operator
    if (this != &other) {
        AMateria::operator=(other);
    }
   return *this;
}

Cure::~Cure() {// destructor
}

/*-------------------------------------------------------------------------------------------*/

Cure::Cure(std::string const & name):AMateria(name){ // parameters constructor
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}