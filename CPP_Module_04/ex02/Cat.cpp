#include "Cat.hpp"
#include "Brain.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Cat::Cat(){
		type = "Cat";
		brain = new Brain();
		std::cout <<"Cat " << "default constructor called :)" << std::endl;
}

Cat::Cat(const Cat &cat):Animal(cat), brain(new Brain(*(cat.brain))){
	std::cout << "Cat copy constructor called :)" << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat &cat){
	if (this != &cat)
	{
		delete brain;
        this->brain = new Brain(*(cat.brain));
		this->type = cat.type;
		std::cout << "Animal assignment operator called :)" << std::endl;
	}
	return *this;
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat  destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/