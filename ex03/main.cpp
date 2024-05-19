/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:42:35 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 17:06:56 by tlassere         ###   ########.fr       */
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

int	main(void)
{
	IMateriaSource*	src = new (std::nothrow) MateriaSource();
	ICharacter*		me = new (std::nothrow) Character("me");
	ICharacter*		bob = new (std::nothrow) Character("bob");
	AMateria*		tmp;
	AMateria*		buffer_inv_2;

	if (src && me && bob)
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
		buffer_inv_2 = tmp;
		me->equip(tmp);
		tmp = src->createMateria("chris");
		me->equip(tmp);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
	
		tmp = src->createMateria("flo");
		me->equip(tmp);
		me->unequip(2);
		std::cout << "No case in index 2" << std::endl;
		me->use(2, *bob);
		me->equip(src->createMateria("chris"));
		me->use(2, *bob);
		
		if (tmp)
			delete tmp;
	}
	if (bob)
		delete bob;
	if (me)
		delete me;
	if (src)
		delete src;
	return (0);
}
