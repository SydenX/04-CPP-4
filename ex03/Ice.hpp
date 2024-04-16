
#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria {
	private:
		
	public:
		Ice();
		~Ice();
		Ice(Ice const &ice);
		Ice& 	operator=(Ice const&);
		AMateria* clone() const;
};

#endif
