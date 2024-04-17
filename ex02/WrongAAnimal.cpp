
#include "WrongAAnimal.hpp"

//Constructor
WrongAAnimal::WrongAAnimal() {
	std::cout << "WrongAAnimal spawned" << std::endl;
}

WrongAAnimal::WrongAAnimal(std::string type) {
	std::cout << "WrongAAnimal of type " << type << " spawned" << std::endl;
	this->type = type;
}

//Destructor
WrongAAnimal::~WrongAAnimal() {
	std::cout << "WrongAAnimal destroyed" << std::endl;
}

//Copy-Constructor
WrongAAnimal::WrongAAnimal(WrongAAnimal const &wrongAnimal) {
	*this = wrongAnimal;
}

//Copy-Assignment Operator Overload
WrongAAnimal&	WrongAAnimal::operator=(WrongAAnimal const &wrongAnimal){
	this->type = wrongAnimal.getType();
	return *this;
}

std::string WrongAAnimal::getType() const{
	return this->type;
}

void	WrongAAnimal::makeSound() const {
	std::cout << "I think i'm wrong.." << std::endl;
}