/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 19:52:36 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog deconstructor called" << std::endl;
	return ;
}

Dog::Dog( Dog const& cpy )
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Dog& Dog::operator=( Dog const& cpy )
{
	std::cout << "Dog copy asignement operator called" << std::endl;
	this->type = cpy.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf Wouf" << std::endl;
	return ;
}
