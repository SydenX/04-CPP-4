
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>

class IMateriaSource {
	private:
		
	public:
		IMateriaSource();
		~IMateriaSource();
		IMateriaSource(IMateriaSource const &imateriasource);
		IMateriaSource& 	operator=(IMateriaSource const&);
};

#endif
