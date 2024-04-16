
#include "Dog.hpp"

//Constructor
Dog::Dog(): Animal("Dog") {
	this->brain = new Brain();
	std::cout << "Dog spawned" << std::endl;
}

//Destructor
Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destroyed" << std::endl;
}

//Copy-Constructor
Dog::Dog(Dog const &dog) {
	*this = dog;
}

//Copy-Assignment Operator Overload
Dog&	Dog::operator=(Dog const &dog){
	this->brain = new Brain(*dog.getBrain());
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Ouaf" << std::endl;
}

Brain* Dog::getBrain() const{
	return this->brain;
}