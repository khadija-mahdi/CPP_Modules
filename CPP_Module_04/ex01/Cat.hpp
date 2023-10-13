#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Cat(); // ---> default constructor
	Cat(const Cat &cat); // ---> copy constructor 
	Cat &operator=(const Cat &cat); //--> Copy assignment operator 
	virtual ~Cat();// destructor

/*-------------------------------------------------------------------------------*/
    virtual void makeSound() const{
        std::cout << "The " << type << " sound is : Meow! 😺 " << std::endl;
    }
	Brain &getBrain()const{
		return *brain;
	}
};
#endif