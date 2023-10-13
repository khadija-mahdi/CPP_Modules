#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout  <<" \n -----------------Animals-----------------------------\n" << std::endl;
    int animalsNbr = 8;
    Animal* animals[animalsNbr];
    for (int i = 0; i < animalsNbr; i++)
    {
        if (i < animalsNbr/2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << std::endl;
    }
    for (int i = 0; i < animalsNbr;i++)
        animals[i]->makeSound();
    for (int i = 0; i < animalsNbr; i++)
        delete animals[i];
    // std::cout  <<" \n --------------deep copy check-----------------------------------\n" << std::endl;
    // Cat b;
    // {
    //     Cat c;
    //     c.getBrain().setIdea("kmahdi", 0);
    //     b = c;
    // }
    // std::cout  << "\nidea : "  << b.getBrain().getIdea(0)  << "\n" << std::endl;
    return 0;
}
