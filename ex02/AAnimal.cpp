
#include "AAnimal.hpp"

//Constructor
AAnimal::AAnimal() {
	std::cout << "AAnimal spawned" << std::endl;
}

AAnimal::AAnimal(std::string type) {
	std::cout << "AAnimal of type " << type << " spawned" << std::endl;
	this->type = type;
}

//Destructor
AAnimal::~AAnimal() {
	std::cout << "AAnimal destroyed" << std::endl;
}

//Copy-Constructor
AAnimal::AAnimal(AAnimal const &animal) {
	*this = animal;
}

//Copy-Assignment Operator Overload
AAnimal&	AAnimal::operator=(AAnimal const &animal){

	return *this;
}

std::string AAnimal::getType() const{
	return this->type;
}

void	AAnimal::makeSound() const {
	std::cout << "I don't know how I am.." << std::endl;
}