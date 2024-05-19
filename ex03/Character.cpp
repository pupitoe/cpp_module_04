/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:52:17 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 16:29:08 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character( std::string str )
{
	//std::cout << "Character default constructor called" << std::endl;
	this->name = str;
	for (int i = 0; i < INV_LIM; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::~Character( void )
{
	//std::cout << "Character default deconstructor called" << std::endl;
	for (int i = 0; i < INV_LIM; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	return ;
}

Character::Character( Character const& cpy )
{
	//std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < INV_LIM; i++)
		this->inventory[i] = NULL;
	*this = cpy;
	return ;
}

Character&	Character::operator=( Character const& cpy )
{
	//std::cout << "Character copy asignement operator called" << std::endl;
	this->name = cpy.name;
	for (int i = 0; i < INV_LIM; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = NULL;
		if (cpy.inventory[i])
			this->inventory[i] = cpy.inventory[i]->clone();
	}
	return (*this);
}

std::string const& Character::getName( void ) const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (i < INV_LIM && m != this->inventory[i])
		i++;
	std::cout << i << " ah" << std::endl;
	if(i == INV_LIM && m )
	{
		i = 0;
		while (i < INV_LIM && this->inventory[i])
			i++;
		if (i < INV_LIM)
			this->inventory[i] = m;
		else
			std::cout << "I d'ont have place" << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < INV_LIM)
		this->inventory[idx] = NULL;
	else
		std::cout << "Unequip out of band" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INV_LIM && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Use out of band" << std::endl;
}
