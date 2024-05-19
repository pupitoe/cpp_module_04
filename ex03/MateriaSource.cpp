/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:07:21 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 16:37:38 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	//std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < INV_LIM; i++)
		this->brain[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	//std::cout << "MateriaSource default deconstructor called" << std::endl;
	for (int i = 0; i < INV_LIM; i++)
	{
		if (this->brain[i])
			delete this->brain[i];
	}
	return ;
}

MateriaSource::MateriaSource( MateriaSource const& cpy )
{
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < INV_LIM; i++)
		this->brain[i] = NULL;
	*this = cpy;
	return ;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const& cpy )
{
	//std::cout << "MateriaSource copy asignement operator called" << std::endl;
	for (int i = 0; i < INV_LIM; i++)
	{
		if (this->brain[i])
			delete this->brain[i];
		this->brain[i] = NULL;
		if (cpy.brain[i])
			this->brain[i] = cpy.brain[i]->clone();
	}
	return (*this);	
}

void	MateriaSource::learnMateria( AMateria* materia )
{
	int	i;

	i = 0;
	while (i < INV_LIM && materia != this->brain[i])
		i++;
	if(i == INV_LIM && materia)
	{
		i = 0;
		while (i < INV_LIM && this->brain[i])
			i++;
		if (i < INV_LIM)
			this->brain[i] = materia;
		else
		{
			std::cout << "I d'ont have place" << std::endl;
			std::cout << "**The materia is deleted**" << std::endl;
			delete materia;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	AMateria	*buffer;

	buffer = NULL;
	for (int i = 0; i < INV_LIM && buffer == NULL; i++)
	{
		if (this->brain[i] && this->brain[i]->getType() == type)
			buffer = this->brain[i]->clone();
	}
	return (buffer);
}
