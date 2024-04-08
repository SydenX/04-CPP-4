
#include "Animal.hpp"

//Constructor
Animal::Animal() {
	std::cout << "Animal spawned" << std::endl;
}

Animal::Animal(std::string type) {
	std::cout << "Animal of type " << type << " spawned" << std::endl;
	this->type = type;
}

//Destructor
Animal::~Animal() {
	std::cout << "Animal destroyed" << std::endl;
}

//Copy-Constructor
Animal::Animal(Animal const &animal) {
	*this = animal;
}

//Copy-Assignment Operator Overload
Animal&	Animal::operator=(Animal const &animal){

	return *this;
}

std::string Animal::getType() const{
	return this->type;
}

void	Animal::makeSound() const {
	std::cout << "I don't know how I am.." << std::endl;
}