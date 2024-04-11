
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal {
	private:
		std::string _type;
	public:
		Cat();
		~Cat();
		Cat(Cat const &cat);
		Cat& 	operator=(Cat const&);
		void	makeSound() const;
		std::string getType() const;
};

#endif
