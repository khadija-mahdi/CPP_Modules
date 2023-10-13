#ifndef WONGCAT_HPP
#define WONGCAT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal{
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	WrongCat(); // ---> default constructor
	WrongCat(const WrongCat &WrongCat); // ---> copy constructor 
	WrongCat &operator=(const WrongCat &WrongCat); //--> Copy assignment operator 
	~WrongCat();// destructor

/*-------------------------------------------------------------------------------*/
	/*-------------------------------------------------------------------------------*/
    void makeSound() const{
        std::cout << "The " << type << " sound is : Meow! 😺 " << std::endl;
    }	
};
#endif