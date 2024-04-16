
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {
	protected:
		std::string	type;
	private:
		
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		AAnimal(AAnimal const &animal);
		virtual AAnimal& 	operator=(AAnimal const&);
		virtual void	makeSound() const = 0;
		virtual	Brain* getBrain() const = 0;
		std::string getType() const;
};

#endif
