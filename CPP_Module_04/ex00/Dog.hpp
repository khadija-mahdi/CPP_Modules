#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "Animal.hpp"

class Dog : public Animal{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Dog(); // ---> default constructor
	Dog(const Dog &dog); // ---> copy constructor 
	Dog &operator=(const Dog &dog); //--> Copy assignment operator 
	virtual ~Dog();// destructor

/*-------------------------------------------------------------------------------*/
    virtual void makeSound() const;
};
#endif