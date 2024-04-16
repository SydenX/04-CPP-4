
#include "IMateriaSource.hpp"

//Constructor
IMateriaSource::IMateriaSource() {
}

//Destructor
IMateriaSource::~IMateriaSource() {
}

//Copy-Constructor
IMateriaSource::IMateriaSource(IMateriaSource const &imateriasource) {
	*this = imateriasource;
}

//Copy-Assignment Operator Overload
IMateriaSource&	IMateriaSource::operator=(IMateriaSource const &imateriasource){

	return *this;
}

