
#include "MateriaSource.hpp"

//Constructor
MateriaSource::MateriaSource() {
	for(int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

//Destructor
MateriaSource::~MateriaSource() {
}

//Copy-Constructor
MateriaSource::MateriaSource(MateriaSource const &materiasource) {
	*this = materiasource;
}

//Copy-Assignment Operator Overload
MateriaSource&	MateriaSource::operator=(MateriaSource const &materiasource){

	return *this;
}

void MateriaSource::learnMateria(AMateria* amateria){
	for (int i = 0; i < 4; i++){
		if (this->_slots[i] == NULL){
			this->_slots[i] = amateria;
			return;
		}
	}
	delete amateria;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
		if (this->_slots[i] != NULL)
			if (this->_slots[i]->getType() == type)
				return this->_slots[i]->clone();
	return 0;
}