/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:45:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 16:40:00 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain deconstructor called" << std::endl;
	return ;
}

Brain::Brain( Brain const& cpy )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Brain& Brain::operator=( Brain const& cpy )
{
	std::cout << "Brain copy asignement operator called" << std::endl;
	for (int i = 0; i < COUNT_IDEA; i++)
		this->ideas[i] = cpy.ideas[i];
	return (*this);
}

void	Brain::set_ideas( std::string idea )
{
	for (int i = 0; i < COUNT_IDEA; i++)
		this->ideas[i] = idea;
}

void	Brain::set_idea( int pos, std::string idea )
{
	if (pos < COUNT_IDEA)
		this->ideas[pos] = idea;
}

void	Brain::print_ideas( int start, int end ) const
{
	for (int i = start; i < COUNT_IDEA && i <= end; i++)
		std::cout << this->ideas[i] << std::endl;
}
