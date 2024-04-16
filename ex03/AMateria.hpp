
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	private:
		std::string	_type;
	public:
		AMateria();
		~AMateria();
		AMateria(AMateria const &amateria);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		AMateria& 	operator=(AMateria const&);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
