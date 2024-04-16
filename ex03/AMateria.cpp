
#include "AMateria.hpp"

//Constructor
AMateria::AMateria() {
}

AMateria::AMateria(std::string const & type): _type(type) {
}


//Destructor
AMateria::~AMateria() {
}

//Copy-Constructor
AMateria::AMateria(AMateria const &amateria) {
	*this = amateria;
}

//Copy-Assignment Operator Overload
AMateria&	AMateria::operator=(AMateria const &amateria){

	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target){
	std::cout << "Nothing to use on " << target.getName() << std::endl;
}

