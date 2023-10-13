#include "Character.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Character::Character():name("someone"){
	for(int i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
}

Character::Character(const Character &Character):ICharacter(Character){
	for (int i = 0; i < 4; ++i)
        delete inventory[i];
    for (int i = 0; i < 4; ++i)
    {
        inventory[i] = Character.inventory[i]->clone();
    }
	*this = Character;
}

Character& Character::operator=(const Character &Character){
	if (this != &Character){
        name = Character.name;
        for (int i = 0; i < 4; ++i)
            delete inventory[i];
        for (int i = 0; i < 4; ++i) {
            inventory[i] = Character.inventory[i]->clone();
	    }
	}
	return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete inventory[i];
    }
}

/*-------------------------------------------------------------------------------------------*/

Character::Character(std::string const & name):name(name){ // parameters constructor
    for(int i = 0; i < 4; i++){
		inventory[i] = NULL;
	}
}

std::string const& Character::getName() const {
    return name;
}

void Character::equip(AMateria* matria) {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] == NULL) {
            inventory[i] = matria;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        inventory[idx] = NULL;
    }    
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
        inventory[idx]->use(target);
    }
}
