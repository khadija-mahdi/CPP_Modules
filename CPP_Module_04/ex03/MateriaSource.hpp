#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "IMateriaSource.hpp"

class IMateriaSource;
class MateriaSource : public IMateriaSource{
private:
	AMateria* Materias[4];
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	MateriaSource(); // ---> default constructor
	MateriaSource(const MateriaSource &MateriaSource); // ---> copy constructor 
	MateriaSource &operator=(const MateriaSource &MateriaSource); //--> Copy assignment operator 
	virtual ~MateriaSource();// destructor

/*-------------------------------------------------------------------------------*/
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};
#endif