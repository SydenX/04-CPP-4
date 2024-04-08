
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	private:
		
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &wrongAnimal);
		WrongAnimal& 	operator=(WrongAnimal const&);
		virtual void	makeSound() const;
		std::string getType() const;
};

#endif
