
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAAnimal {
	protected:
		std::string	type;
	private:
		
	public:
		WrongAAnimal();
		WrongAAnimal(std::string type);
		virtual ~WrongAAnimal();
		WrongAAnimal(WrongAAnimal const &wrongAnimal);
		WrongAAnimal& 	operator=(WrongAAnimal const&);
		virtual void	makeSound() const = 0;
		std::string getType() const;
};

#endif
