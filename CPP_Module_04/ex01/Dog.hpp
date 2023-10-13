#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain *brain;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Dog(); // ---> default constructor
	Dog(const Dog &dog); // ---> copy constructor 
	Dog &operator=(const Dog &dog); //--> Copy assignment operator 
	virtual ~Dog();// destructor

/*-------------------------------------------------------------------------------*/
    virtual void makeSound() const{
        std::cout << "The " << type << " sound is : Woof! 🐶 " << std::endl;
    }
};
#endif