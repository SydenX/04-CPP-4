
#include "Brain.hpp"

//Constructor
Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

//Destructor
Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

//Copy-Constructor
Brain::Brain(Brain const &brain) {
	*this = brain;
}

//Copy-Assignment Operator Overload
Brain&	Brain::operator=(Brain const &brain){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}
