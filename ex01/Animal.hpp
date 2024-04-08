
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string	type;
	private:
		
	public:
		Animal();
		Animal(std::string type);
		~Animal();
		Animal(Animal const &animal);
		Animal& 	operator=(Animal const&);
		virtual void	makeSound() const;
		std::string getType() const;
};

#endif
