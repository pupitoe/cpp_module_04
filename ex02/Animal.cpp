/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 16:02:11 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "no animal :(";
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal deconstructor called" << std::endl;
	return ;
}

Animal::Animal( Animal const& cpy )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Animal& Animal::operator=( Animal const& cpy )
{
	std::cout << "Animal copy asignement operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}
