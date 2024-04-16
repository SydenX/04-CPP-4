
#include "Character.hpp"

//Constructor
Character::Character() {
}

//Destructor
Character::~Character() {
}

//Copy-Constructor
Character::Character(Character const &character) {
	*this = character;
}

//Copy-Assignment Operator Overload
Character&	Character::operator=(Character const &character){

	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++)
		if(this->_slots[i] == NULL)
			this->_slots[i] = m;
}

void 	Character::unequip(int index) {
	if (index < 4)
		this->_slots[index] = NULL;
}

void	Character::use(int index, ICharacter& target){
	if (index < 4)
		if (this->_slots[index] != NULL)
			this->_slots[index]->use(target);
}
