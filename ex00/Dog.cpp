
#include "Dog.hpp"

//Constructor
Dog::Dog(): Animal("Dog") {
}

//Destructor
Dog::~Dog() {
}

//Copy-Constructor
Dog::Dog(Dog const &dog) {
	*this = dog;
}

//Copy-Assignment Operator Overload
Dog&	Dog::operator=(Dog const &dog){

	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Ouaf" << std::endl;
}