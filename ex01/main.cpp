/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:57:00 by jtollena          #+#    #+#             */
/*   Updated: 2024/04/16 12:07:35 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

void	testDeepCopy(void) {
	std::cout << BWHT "\n>>> RUNNING DEEPCOPY TESTS\n" CRESET << std::endl;
	std::cout << BWHT << "--- Dog's behavior ---" << CRESET << std::endl;
	Dog	dogA;
	Dog dogB;

	std::cout << BWHT << "------- Ideas must be different AND address" << CRESET << std::endl;
	dogA.getBrain()->ideas[0] = "DogA's idea";
	dogB.getBrain()->ideas[0] = "DogB's idea";
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogA.getBrain()->ideas[0] << CRESET << " (" << &dogA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogB.getBrain()->ideas[0] << CRESET <<" (" << &dogB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << BWHT << "-------Ideas must be the same BUT address different" << CRESET << std::endl;
	dogB = dogA;
	std::cout << "DogA's address (" << &dogA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogA.getBrain()->ideas[0] << CRESET << " (" << &dogA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "DogB's address (" << &dogB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << dogB.getBrain()->ideas[0] << CRESET <<" (" << &dogB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << BWHT << "--- Cat's behavior ---" << CRESET << std::endl;
	Cat	catA;
	Cat catB;

	std::cout << BWHT << "------- Ideas must be different AND address" << CRESET << std::endl;
	catA.getBrain()->ideas[0] = "CatA's idea";
	catB.getBrain()->ideas[0] = "CatB's idea";
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catA.getBrain()->ideas[0] << CRESET << " (" << &catA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catB.getBrain()->ideas[0] << CRESET <<" (" << &catB.getBrain()->ideas[0] << ")" << std::endl;

	std::cout << BWHT << "-------Ideas must be the same BUT address different" << CRESET << std::endl;
	catB = catA;
	std::cout << "CatA's address (" << &catA << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catA.getBrain()->ideas[0] << CRESET << " (" << &catA.getBrain()->ideas[0] << ")" << std::endl;
	std::cout << "CatB's address (" << &catB << ")..." << std::endl;
	std::cout << "    idea[0]=" << BGRN << catB.getBrain()->ideas[0] << CRESET <<" (" << &catB.getBrain()->ideas[0] << ")" << std::endl;
}

int	main(){
	Animal	*animals[100];
	for(int i = 0; i < 50; i++)
		animals[i] = new Dog();
	for(int i = 50; i < 100; i++)
		animals[i] = new Cat();

	for(int i = 0; i < 100; i++)
		animals[i]->makeSound();

	for(int i = 0; i < 100; i++)
		delete animals[i];

	testDeepCopy();
	return 0;
}