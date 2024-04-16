
#include "Cure.hpp"

//Constructor
Cure::Cure(): AMateria("cure") {
}

//Destructor
Cure::~Cure() {
}

//Copy-Constructor
Cure::Cure(Cure const &cure) {
	*this = cure;
}

//Copy-Assignment Operator Overload
Cure&	Cure::operator=(Cure const &cure){

	return *this;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
