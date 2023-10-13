#include "IMateriaSource.hpp"
#include "AMateria.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

IMateriaSource::IMateriaSource(){
}

IMateriaSource::IMateriaSource(const IMateriaSource &IMateriaSource){
	*this = IMateriaSource;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &IMateriaSource){
	if (this != &IMateriaSource)
	{
		this->operator=(IMateriaSource);
	}
	return *this;
}

IMateriaSource::~IMateriaSource() {
}

/*-------------------------------------------------------------------------------------------*/