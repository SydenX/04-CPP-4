
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
	private:
		
	public:
		Cat();
		~Cat();
		Cat(Cat const &cat);
		Cat& 	operator=(Cat const&);
		void	makeSound() const;
};

#endif
