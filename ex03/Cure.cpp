/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:41:38 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 21:44:34 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure( void ): AMateria("Cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::~Cure( void )
{
	std::cout << "Cure default deconstructor called" << std::endl;
	return ;
}

Cure::Cure( Cure const& cpy ): AMateria(cpy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Cure&	Cure::operator=( Cure const& cpy )
{
	std::cout << "Cure copy asignement operator called" << std::endl;
	(void)cpy;
	return (*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone( void ) const
{
	AMateria*	clone;
	
	clone = new (std::nothrow) Cure();
	if (clone)
		*clone = *this;
	return (clone); 
}
