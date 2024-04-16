
#include "Character.hpp"

//Constructor
Character::Character() {
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character(std::string name): _name(name){
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}


//Destructor
Character::~Character() {
	for (int i = 0; i < 4; i++){
		delete this->_slots[i];
		this->_slots[i] = NULL;
	}
}

//Copy-Constructor
Character::Character(Character const &character) {
	*this = character;
}

//Copy-Assignment Operator Overload
Character&	Character::operator=(Character const &character){
	for (int i = 0; i < 4; i++){
		delete this->_slots[i];
		this->_slots[i] = NULL;
	}
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = character._slots[i]->clone(); //Deep
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void	Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if(this->_slots[i] == NULL){
			this->_slots[i] = m;
			return;
		}
	}
	delete m;
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
