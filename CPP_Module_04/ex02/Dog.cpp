#include "Dog.hpp"
#include "Brain.hpp"


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Dog::Dog():Animal(){
        type = "Dog";
		brain = new Brain();
		std::cout <<"Dog " << "default constructor called :)" << std::endl;
}

Dog::Dog(const Dog &dog) :Animal(dog), brain(new Brain(*(dog.brain))) {
	std::cout << "Dog copy constructor called :)" << std::endl;	
	*this = dog;
}

Dog& Dog::operator=(const Dog &dog){
	if (this != &dog){		
		delete brain;
        this->brain = new Brain(*(dog.brain));
		this->type = dog.type;
		std::cout << "Dog assg operator called :)" << std::endl;
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
    std::cout << "Dog destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/