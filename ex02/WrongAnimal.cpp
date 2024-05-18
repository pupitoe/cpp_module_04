/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 14:49:12 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "no Wrong animal :(((( :(";
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal deconstructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const& cpy )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

WrongAnimal& WrongAnimal::operator=( WrongAnimal const& cpy )
{
	std::cout << "WrongAnimal copy asignement operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "I am so strong in french" << std::endl;
	return ;
}
