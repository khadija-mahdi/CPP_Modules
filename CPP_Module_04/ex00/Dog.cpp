#include "Dog.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Dog::Dog():Animal(){
        type = "Dog";
		std::cout <<"Dog " << "default constructor called :)" << std::endl;
}

Dog::Dog(const Dog &dog) :Animal(dog) {
	std::cout << "Dog copy constructor called :)" << std::endl;	
	*this = dog;
}

Dog& Dog::operator=(const Dog &dog){
	if (this != &dog)
	{
		std::cout << "Dog assignment operator called :)" << std::endl;
		this->type = dog.type;
	}
	return *this;
}

Dog::~Dog() {
    std::cout << "Dog destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/

void Dog::makeSound() const{
        std::cout << "The " << type << " sound is : Woof! 🐶 " << std::endl;
    }