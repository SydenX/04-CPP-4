
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
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &wrongAnimal);
		WrongAnimal& 	operator=(WrongAnimal const&);
		void	makeSound() const;
		std::string getType() const;
};

#endif
