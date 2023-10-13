#include "Cat.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Cat::Cat(){
		type = "Cat";
		std::cout <<"Cat " << "default constructor called :)" << std::endl;
}

Cat::Cat(const Cat &cat):Animal(cat){
	std::cout << "Cat copy constructor called :)" << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat &cat){
	if (this != &cat)
	{
		std::cout << "Animal assignment operator called :)" << std::endl;
		this->type = cat.type;
	}
	return *this;
}

Cat::~Cat() {
    std::cout << "Cat  destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/

void Cat::makeSound() const{
        std::cout << "The " << type << " sound is : Meow! 😺 " << std::endl;
    }