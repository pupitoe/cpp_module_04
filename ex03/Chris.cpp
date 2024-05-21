/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chris.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:44:36 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/21 16:22:48 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Chris.hpp"

Chris::Chris( void ): AMateria("chris")
{
	//std::cout << "Chris default constructor called" << std::endl;
	return ;
}

Chris::~Chris( void )
{
	//std::cout << "Chris default deconstructor called" << std::endl;
	return ;
}

Chris::Chris( Chris const& cpy ): AMateria(cpy)
{
	//std::cout << "Chris copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Chris&	Chris::operator=( Chris const& cpy )
{
	//std::cout << "Chris copy asignement operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	Chris::use(ICharacter& target)
{
	std::cout << "* DTCANON in to 250AMP in you " << target.getName()
		<< " *" << std::endl;
}

AMateria*	Chris::clone( void ) const
{
	AMateria*	clone;
	
	clone = new (std::nothrow) Chris();
	if (clone)
		*clone = *this;
	return (clone); 
}
