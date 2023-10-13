#include "WrongAnimal.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

WrongAnimal::WrongAnimal():type("default"){
		std::cout <<"WrongAnimal "<< "default constructor called :)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal){
	*this = wrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wrongAnimal){
	if (this != &wrongAnimal)
	{
		this->type = wrongAnimal.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout <<"WrongAnimal " << "destructor called :)" << std::endl;
}
/*-------------------------------------------------------------------------------------------*/


std::string WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout << "Default sound for worng animal is no sound :(" << std::endl;
}
