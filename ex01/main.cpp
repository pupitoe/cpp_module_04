/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:42:35 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 17:34:22 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		Cat* i = new (std::nothrow) Cat();
		Cat *kiwikosmic = new (std::nothrow) Cat();
		
		std::cout << std::endl;
		if (i && kiwikosmic)
		{
			i->setIdea("pultion");
			std::cout << "Ideas of cat:" << std::endl;
			i->printIdea();
	
			std::cout << std::endl;
			*kiwikosmic = *i;
	
			std::cout << "Ideas of kiwi:" << std::endl;
			kiwikosmic->printIdea();
			std::cout << "New ideas of kiwi:" << std::endl;
			kiwikosmic->setIdea("detention");
			kiwikosmic->printIdea();

			std::cout << "Ideas of cat:" << std::endl;
			i->printIdea();
			std::cout << std::endl;
		}
		if (i)
			delete i;
		if (kiwikosmic)
			delete kiwikosmic;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Dog* i = new (std::nothrow) Dog();
		Dog *ki2 = new (std::nothrow) Dog();
		
		std::cout << std::endl;
		if (i && ki2)
		{
			i->setIdea("eradication");
			std::cout << "Ideas of dog:" << std::endl;
			i->printIdea();
	
			std::cout << std::endl;
			*ki2 = *i;
	
			std::cout << "Ideas of ki2:" << std::endl;
			ki2->printIdea();
			std::cout << "New ideas of ki2:" << std::endl;
			ki2->setIdea("kaillou");
			ki2->printIdea();

			std::cout << "Ideas of dog:" << std::endl;
			i->printIdea();
			std::cout << std::endl;
		}
		if (i)
			delete i;
		if (ki2)
			delete ki2;	
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		
	}
	return (0);
}
