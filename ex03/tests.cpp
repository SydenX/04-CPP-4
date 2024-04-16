/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:52:23 by jtollena          #+#    #+#             */
/*   Updated: 2024/04/16 14:59:44 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

# define INVENTORY_SIZE	4

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

void	testCharacter(void)
{
	std::cout << BWHT "\n>>> TESTING CHARACTER OBJECT\n" CRESET << std::endl;
	ICharacter	*Bob = new Character("Bob");
	ICharacter	*Patrick = new Character("Patrick");
	AMateria	*ice = new Ice();

	/* Filling Bob's inventory */
	Bob->equip(new Ice());
	Bob->equip(ice);
	Bob->equip(new Ice());
	Bob->equip(new Cure());
	Bob->equip(new Cure()); // Over filling Bob's inventory
	/* Filling Patrick's inventory */
	Patrick->equip(new Cure());
	Patrick->equip(new Cure());
	Patrick->equip(new Ice());

	/* Using materias */
	std::cout << "-Bob should shoot Patrick" << std::endl;
	Bob->use(0, *Patrick);
	std::cout << "-Bob should shoot Patrick" << std::endl;
	Bob->use(1, *Patrick);
	std::cout << "-Bob should HEAL Patrick" << std::endl;
	Bob->use(3, *Patrick);
	std::cout << "-Patrick should shoot Bob" << std::endl;
	Patrick->use(2, *Bob);

	/* Unequiping materia and use empty slot */
	Bob->unequip(1);
	std::cout << "-Nothing should happen" << std::endl;
	Bob->use(1, *Patrick);

	/* Equiping new materia and use the filled slot */
	Bob->equip(new Cure());
	std::cout << "-Bob should HEAL Patrick" << std::endl;
	Bob->use(1, *Patrick);

	delete Bob;
	delete Patrick;
	delete ice;
}

void	testMateriaSource()
{
	std::cout << BWHT "\n>>> TESTING MATERIASOURCE OBJECT\n" CRESET << std::endl;
	IMateriaSource	*materiaSource = new MateriaSource();
	ICharacter		*Bob = new Character("Pedro");
	ICharacter		*brandon = new Character("Brandon");
	
	/* Learning new materias */
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure()); // Over learning items

	/* Equiping learnt materias */
	Bob->equip(materiaSource->createMateria("cure"));
	Bob->equip(materiaSource->createMateria("cure"));
	Bob->equip(materiaSource->createMateria("ice"));
	Bob->equip(materiaSource->createMateria("ice"));
	Bob->equip(materiaSource->createMateria("cure")); // Over filling Pedro's inventory

	/* Use against Brandon */
	std::cout << "-Pedro should HEAL Brandon" << std::endl;
	Bob->use(0, *brandon);
	std::cout << "-Pedro should shoot Brandon" << std::endl;
	Bob->use(2, *brandon);
	
	delete materiaSource;
	delete Bob;
	delete brandon;
}
