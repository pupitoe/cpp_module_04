/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 14:59:48 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat deconstructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const& cpy )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

WrongCat& WrongCat::operator=( WrongCat const& cpy )
{
	std::cout << "WrongCat copy asignement operator called" << std::endl;
	(void)cpy;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "I have a wrong sound" << std::endl;
	return ;
}
