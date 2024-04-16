
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
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
