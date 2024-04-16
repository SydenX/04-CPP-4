
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	private:
		AMateria *_slots[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &materiasource);
		MateriaSource& 	operator=(MateriaSource const&);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
