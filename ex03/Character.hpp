
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter {
	private:
		AMateria	*_slots[4];
		std::string	_name;
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(Character const &character);
		Character& 	operator=(Character const&);
		std::string const &getName() const;
		void	equip(AMateria* m);
		void 	unequip(int index);
		void	use(int index, ICharacter& target);
};

#endif
