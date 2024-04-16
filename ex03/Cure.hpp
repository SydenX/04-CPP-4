
#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria {
	private:

	public:
		Cure();
		~Cure();
		Cure(Cure const &cure);
		Cure& 	operator=(Cure const&);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
