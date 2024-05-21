/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Flo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:42:16 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/21 16:22:59 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Flo.hpp"

Flo::Flo( void ): AMateria("flo")
{
	//std::cout << "Flo default constructor called" << std::endl;
	return ;
}

Flo::~Flo( void )
{
	//std::cout << "Flo default deconstructor called" << std::endl;
	return ;
}

Flo::Flo( Flo const& cpy ): AMateria(cpy)
{
	//std::cout << "Flo copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Flo&	Flo::operator=( Flo const& cpy )
{
	//std::cout << "Flo copy asignement operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	Flo::use(ICharacter& target)
{
	std::cout << "* Super kick in " << target.getName() << " *" << std::endl;
}

AMateria*	Flo::clone( void ) const
{
	AMateria*	clone;
	
	clone = new (std::nothrow) Flo();
	if (clone)
		*clone = *this;
	return (clone); 
}
