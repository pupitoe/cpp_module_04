/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:42:16 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 16:25:13 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice( void ): AMateria("Ice")
{
	//std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::~Ice( void )
{
	//std::cout << "Ice default deconstructor called" << std::endl;
	return ;
}

Ice::Ice( Ice const& cpy ): AMateria(cpy)
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Ice&	Ice::operator=( Ice const& cpy )
{
	//std::cout << "Ice copy asignement operator called" << std::endl;
	(void)cpy;
	return (*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}

AMateria*	Ice::clone( void ) const
{
	AMateria*	clone;
	
	clone = new (std::nothrow) Ice();
	if (clone)
		*clone = *this;
	return (clone); 
}
