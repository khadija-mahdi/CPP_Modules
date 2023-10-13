#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class Brain{
protected:
	std::string ideas[100];
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Brain(); // ---> default constructor
	Brain(const Brain &brain); // ---> copy constructor 
	Brain &operator=(const Brain &brain); //--> Copy assignment operator 
	~Brain();// destructor

/*-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------*/
/*                                member functions                        */
/*------------------------------------------------------------------------*/
	std::string getIdea(int i) const;
	void setIdea(const std::string &idea, int i);
};
#endif