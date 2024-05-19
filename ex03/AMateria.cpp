/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:34:13 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 17:45:37 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria( std::string const& str )
{
	//std::cout << "AMateria default constructor called" << std::endl;
	this->type = str;
	return ;
}

AMateria::~AMateria( void )
{
	//std::cout << "AMateria default deconstructor called" << std::endl;
	return ;
}

AMateria::AMateria( AMateria const& cpy )
{
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

AMateria&	AMateria::operator=( AMateria const& cpy )
{
	//std::cout << "AMateria copy asignement operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

std::string const& AMateria::getType( void ) const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "Amateria no messages" << std::endl;
}
