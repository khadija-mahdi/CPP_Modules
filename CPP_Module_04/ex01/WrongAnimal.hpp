#ifndef WRONGANIMAlL_HPP
#define WRONGANIMAlL_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class WrongAnimal{
protected:
	std::string type;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	WrongAnimal(); // ---> default constructor
	WrongAnimal(const WrongAnimal &wrongAnimal); // ---> copy constructor 
	WrongAnimal &operator=(const WrongAnimal &wrongAnimal); //--> Copy assignment operator 
	~WrongAnimal();// destructor

/*-------------------------------------------------------------------------------*/
	std::string getType()const;
	void makeSound() const;
};
#endif