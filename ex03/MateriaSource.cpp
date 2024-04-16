
#include "MateriaSource.hpp"

//Constructor
MateriaSource::MateriaSource() {
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

