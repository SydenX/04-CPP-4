
#include "Dog.hpp"

//Constructor
Dog::Dog(): Animal("Dog") {
	std::cout << "Dog spawned" << std::endl;
}

//Destructor
Dog::~Dog() {
	std::cout << "Dog destroyed" << std::endl;
}

//Copy-Constructor
Dog::Dog(Dog const &dog) {
	*this = dog;
}

//Copy-Assignment Operator Overload
Dog&	Dog::operator=(Dog const &dog){
	this->type = dog.type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Ouaf" << std::endl;
}