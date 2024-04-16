
#include "Cat.hpp"

//Constructor
Cat::Cat(): AAnimal("Cat") {
	this->brain = new Brain();
	std::cout << "Cat spawned" << std::endl;
}

//Destructor
Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}

//Copy-Constructor
Cat::Cat(Cat const &cat) {
	*this = cat;
}

//Copy-Assignment Operator Overload
Cat&	Cat::operator=(Cat const &cat){
	this->brain = new Brain(*cat.getBrain()); //Deep
	//this->brain = cat.getBrain(); //Shallow
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

Brain* Cat::getBrain() const {
	return this->brain;
}