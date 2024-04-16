
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>

class MateriaSource {
	private:
		
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &materiasource);
		MateriaSource& 	operator=(MateriaSource const&);
};

#endif
