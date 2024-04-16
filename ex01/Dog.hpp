
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		~Dog();
		Dog(Dog const &dog);
		Dog& 	operator=(Dog const&);
		void	makeSound() const;
		Brain* getBrain() const;
};

#endif
