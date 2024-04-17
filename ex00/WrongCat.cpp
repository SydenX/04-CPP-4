
#include "WrongCat.hpp"

//Constructor
WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << "WrongCat spawned" << std::endl;
}

//Destructor
WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed" << std::endl;
}

//Copy-Constructor
WrongCat::WrongCat(WrongCat const &wrongCat) {
	*this = wrongCat;
}

//Copy-Assignment Operator Overload
WrongCat&	WrongCat::operator=(WrongCat const &wrongCat){
	this->type = wrongCat.type;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "RHOOOOOUUUUAAAAAARRR" << std::endl;
}

