
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal {
	private:
		
	public:
		Dog();
		~Dog();
		Dog(Dog const &dog);
		Dog& 	operator=(Dog const&);
		void	makeSound() const;
};

#endif
