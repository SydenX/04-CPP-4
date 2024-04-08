
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	private:
		
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &wrongCat);
		WrongCat& 	operator=(WrongCat const&);
		void	makeSound() const;
};

#endif
