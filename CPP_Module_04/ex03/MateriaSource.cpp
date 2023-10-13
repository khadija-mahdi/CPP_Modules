#include "MateriaSource.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++){
		Materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &MateriaSource):IMateriaSource(MateriaSource){
	for (int i = 0; i < 4; ++i) 
        delete Materias[i];
    for (int i = 0; i < 4; ++i) {
        if (MateriaSource.Materias[i] != NULL) {
            Materias[i] = MateriaSource.Materias[i]->clone();
        }
		else{
            Materias[i] = NULL;
        }
    }
	*this = MateriaSource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &MateriaSource){
	if (this != &MateriaSource){
        for (int i = 0; i < 4; ++i) 
            delete Materias[i];
        for (int i = 0; i < 4; ++i) {
            if (MateriaSource.Materias[i] != NULL) {
                Materias[i] = MateriaSource.Materias[i]->clone();
            }
        }
	}
	return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
            delete Materias[i];
    }
}

/*-------------------------------------------------------------------------------------------*/

void MateriaSource::learnMateria(AMateria* matria) {
    for (int i = 0; i < 4; ++i) {
        if (Materias[i] == NULL) {
            Materias[i] = matria->clone();
            delete matria;
            return;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const & matria){
    for (int i = 0; i < 4; ++i) {
        if (Materias[i] != NULL && Materias[i]->getType() == matria) {
            return Materias[i]->clone();
        }
    }
    return 0;
}