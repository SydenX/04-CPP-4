
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
	private:
		Brain* brain;
	public:
		Cat();
		~Cat();
		Cat(Cat const &cat);
		Cat& 	operator=(Cat const&);
		void	makeSound() const;
		Brain* getBrain() const;
};

#endif
