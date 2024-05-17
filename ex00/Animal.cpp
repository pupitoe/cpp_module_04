/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 20:05:29 by tlassere         ###   ########.fr       */
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

std::string	Animal::getType( void )
{
	return (this->type);
}

void	Animal::makeSound( void )
{
	std::cout << "piu piu hu hu I don't have sound" << std::endl;
	return ;
}
