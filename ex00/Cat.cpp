/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 19:52:36 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat deconstructor called" << std::endl;
	return ;
}

Cat::Cat( Cat const& cpy )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Cat& Cat::operator=( Cat const& cpy )
{
	std::cout << "Cat copy asignement operator called" << std::endl;
	(void)cpy;
	return (*this);
}

void	Cat::makeSound( void )
{
	std::cout << "no I wouldn't make a sound" << std::endl;
	return ;
}
