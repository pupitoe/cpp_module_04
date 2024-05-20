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
	this->brain = new (std::nothrow) Brain();
	if (this->brain)
		brain->set_ideas("hello");
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog deconstructor called" << std::endl;
	if (this->brain)
		delete this->brain;
	return ;
}

Dog::Dog( Dog const& cpy )
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new (std::nothrow) Brain();
	*this = cpy;
	return ;
}

Dog& Dog::operator=( Dog const& cpy )
{
	std::cout << "Dog copy asignement operator called" << std::endl;
	this->type = cpy.type;
	if (this->brain && cpy.brain)
		*(this->brain) = *(cpy.brain);
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf Wouf" << std::endl;
	return ;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}

void	Dog::setIdea( std::string idea )
{
	if (this->brain)
		this->brain->set_idea(0, idea);
}

void	Dog::printIdea( void ) const
{
	if (this->brain)
		this->brain->print_ideas(0, 0);
}
