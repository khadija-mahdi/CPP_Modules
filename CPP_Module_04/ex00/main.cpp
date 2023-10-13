#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout  <<" \n -------------------Animal --------------------------\n" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete meta;

    std::cout  <<" \n -----------------Wring Animal ------------------------\n" << std::endl;
   
    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();;
    beta->makeSound();

    delete beta;
    delete k;
    std::cout  <<" \n ------------------------------------------------------\n" << std::endl;

    return 0;
}