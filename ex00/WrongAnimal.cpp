
#include "WrongAnimal.hpp"

//Constructor
WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal spawned" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal of type " << type << " spawned" << std::endl;
	this->type = type;
}

//Destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroyed" << std::endl;
}

//Copy-Constructor
WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal) {
	*this = wrongAnimal;
}

//Copy-Assignment Operator Overload
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &wrongAnimal){
	this->type = wrongAnimal.getType();
	return *this;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "I think i'm wrong.." << std::endl;
}