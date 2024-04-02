
#include "Animal.hpp"

//Constructor
Animal::Animal() {
}

Animal::Animal(std::string type) {
	this->type = type;
}

//Destructor
Animal::~Animal() {
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