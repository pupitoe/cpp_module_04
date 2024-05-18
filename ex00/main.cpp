/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:42:35 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 15:34:31 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* meta = new (std::nothrow) Animal();
		const Animal* j = new (std::nothrow) Dog();
		const Animal* i = new (std::nothrow) Cat();
		
		if (meta && i && j)
		{
			std::cout << j->getType() << " " << std::endl;
			std::cout << i->getType() << " " << std::endl;
			i->makeSound();
			j->makeSound();
			meta->makeSound();
		}
		if (meta)
			delete meta;
		if (i)
			delete i;
		if (j)
			delete j;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* a = new (std::nothrow) WrongCat();
		const WrongCat* b = new (std::nothrow) WrongCat();
		const WrongAnimal* c = new (std::nothrow) WrongAnimal();

		if (a && b && c)
		{
			std::cout << a->getType() << std::endl;
			a->makeSound();
			std::cout << b->getType() << std::endl;
			b->makeSound();
			std::cout << c->getType() << std::endl;
			c->makeSound();
		}
		if (a)
			delete a;
		if (b)
			delete b;
		if (c)
			delete c;
	}
	return (0);
}
