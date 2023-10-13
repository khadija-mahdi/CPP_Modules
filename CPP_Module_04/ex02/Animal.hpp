#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class Animal{
protected:
	std::string type;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Animal(); // ---> default constructor
	Animal(const Animal &animal); // --->ClapTrap copy constructor 
	Animal &operator=(const Animal &animal); //--> Copy assignment operator 
	virtual ~Animal();// destructor

/*-------------------------------------------------------------------------------*/
	std::string getType()const;
	virtual void makeSound() const = 0;

};

#endif