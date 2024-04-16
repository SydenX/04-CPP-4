
#include "WrongCat.hpp"

//Constructor
WrongCat::WrongCat(): WrongAAnimal("WrongCat") {
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

	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "RHOOOOOUUUUAAAAAARRR" << std::endl;
}

