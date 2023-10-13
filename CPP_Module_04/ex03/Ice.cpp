#include "Ice.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Ice::Ice():AMateria("ice"){// ---> default constructor
}

Ice::Ice(const Ice &Ice):AMateria(Ice){
    // ---> copy constructor
	*this = Ice;
}

Ice& Ice::operator=(const Ice& other) {
    //--> Copy assignment operator 
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice() {// destructor
}

/*-------------------------------------------------------------------------------------------*/

Ice::Ice(std::string const & name):AMateria(name){ // parameters constructor
}

AMateria* Ice::clone() const {
    Ice *copy =  new Ice(*this);
    return (copy);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
