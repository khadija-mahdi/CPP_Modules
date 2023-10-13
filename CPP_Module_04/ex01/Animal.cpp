#include "Animal.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Animal::Animal():type("default"){
		std::cout <<"Animal "<< "default constructor called :)" << std::endl;
}

Animal::Animal(const Animal &animal){
	std::cout << "Animal copy constructor called :)" << std::endl;
	*this = animal;
}

Animal& Animal::operator=(const Animal &animal){
	if (this != &animal)
	{
		std::cout << "Animal assg operator called :)" << std::endl;
		this->type = animal.type;
	}
	return *this;
}

Animal::~Animal(){
	std::cout <<"destructor destroyed Animal" << std::endl;
}
/*-------------------------------------------------------------------------------------------*/

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const{
	std::cout << "Default sound for animal is no sound :(" << std::endl;
}