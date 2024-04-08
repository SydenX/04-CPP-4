
#include "Cat.hpp"

//Constructor
Cat::Cat(): Animal("Cat") {
	std::cout << "Cat spawned" << std::endl;
}

//Destructor
Cat::~Cat() {
	std::cout << "Cat destroyed" << std::endl;
}

//Copy-Constructor
Cat::Cat(Cat const &cat) {
	*this = cat;
}

//Copy-Assignment Operator Overload
Cat&	Cat::operator=(Cat const &cat){

	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

