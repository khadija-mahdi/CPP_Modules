#include "WrongCat.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

WrongCat::WrongCat(){
		type = "WrongCat";
		std::cout <<"WrongCat " << "default constructor called :)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat):WrongAnimal(WrongCat){
	*this = WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCat){
	if (this != &WrongCat)
	{
		this->type = WrongCat.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat  destroyed!" << std::endl;
}

/*-------------------------------------------------------------------------------------------*/