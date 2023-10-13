#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "Animal.hpp"


class Cat : public Animal {
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Cat(); // ---> default constructor
	Cat(const Cat &cat); // ---> copy constructor 
	Cat &operator=(const Cat &cat); //--> Copy assignment operator 
	virtual ~Cat();// destructor

/*-------------------------------------------------------------------------------*/
    virtual void makeSound() const;
};
#endif