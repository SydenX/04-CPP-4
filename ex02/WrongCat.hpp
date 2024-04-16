
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAAnimal.hpp"

class WrongCat: public WrongAAnimal {
	private:
		
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &wrongCat);
		WrongCat& 	operator=(WrongCat const&);
		void	makeSound() const;
};

#endif
