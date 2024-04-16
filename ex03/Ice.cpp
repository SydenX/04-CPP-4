
#include "Ice.hpp"

//Constructor
Ice::Ice(): AMateria("ice") {
}

//Destructor
Ice::~Ice() {
}

//Copy-Constructor
Ice::Ice(Ice const &ice) {
	*this = ice;
}

//Copy-Assignment Operator Overload
Ice&	Ice::operator=(Ice const &ice){

	return *this;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

