/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:42:35 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 17:55:51y tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Flo.hpp"
#include "Chris.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

static	void ft_test_unequipe(void)
{
	AMateria		*buffer[4];
	MateriaSource	src;
	AMateria*		fl;
	ICharacter*		po = new (std::nothrow) Character("pototest");

	int	check = 1;
	if (po)
	{
		src.learnMateria(new (std::nothrow) Chris());
		src.learnMateria(new (std::nothrow) Flo());
		fl = src.createMateria("flo");
		if (fl)
		{
			for (int i = 0; i < INV_LIM && check; i++)
			{
				buffer[i] = src.createMateria("chris");
				if (!buffer[i])
					check = 0;
				po->equip(buffer[i]);
			}
			if (check)
			{
				po->use(2, *po);
				po->unequip(2);
				po->equip(fl);
				po->use(2, *po);
				po->equip(buffer[1]);
				delete buffer[2];
			}
			else
				delete fl;
		}
		delete po;
	}
}

int	main(void)
{
	IMateriaSource*	src = new (std::nothrow) MateriaSource();
	ICharacter*		me = new (std::nothrow) Character("me");
	ICharacter*		bob = new (std::nothrow) Character("bob");
	ICharacter*		copy_of_me = new (std::nothrow) Character("fake me");
	AMateria*		tmp;

	if (src && me && bob && copy_of_me)
	{
		src->learnMateria(new (std::nothrow) Ice());
		src->learnMateria(new (std::nothrow) Cure());
		src->learnMateria(new (std::nothrow) Chris());
		src->learnMateria(new (std::nothrow) Flo());
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("flo");
		me->equip(tmp);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
	
		me->use(2, *copy_of_me);
		// To use override operator= of class Character
		*static_cast<Character *>(copy_of_me) = *static_cast<Character *>(me);
		me->use(3, *copy_of_me);
		copy_of_me->use(3, *me);
		copy_of_me->equip(NULL);

		std::cout << "Materia out of band" << std::endl;
		src->learnMateria(new (std::nothrow) Flo());
		src->learnMateria(NULL);
		
		me->use(69, *bob);
		me->use(-656, *bob);
	}
	if (bob)
		delete bob;
	if (me)
		delete me;
	if (src)
		delete src;
	if (copy_of_me)
		delete copy_of_me;
	ft_test_unequipe();
	return (0);
}
