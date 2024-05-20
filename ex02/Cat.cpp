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
	this->brain = new (std::nothrow) Brain();
	if (this->brain)
		this->brain->set_ideas("cat cat");
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat deconstructor called" << std::endl;
	if (this->brain)
		delete this->brain;
	return ;
}

Cat::Cat( Cat const& cpy )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new (std::nothrow) Brain();
	*this = cpy;
	return ;
}

Cat& Cat::operator=( Cat const& cpy )
{
	std::cout << "Cat copy asignement operator called" << std::endl;
	this->type = cpy.type;
	if (this->brain && cpy.brain)
		*(this->brain) = *(cpy.brain);
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "no I wouldn't make a sound" << std::endl;
	return ;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}

void	Cat::setIdea( std::string idea )
{
	if (this->brain)
		this->brain->set_idea(0, idea);
}

void	Cat::printIdea( void ) const
{
	if (this->brain)
		this->brain->print_ideas(0, 0);
}
