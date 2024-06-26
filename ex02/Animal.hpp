/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:44:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 15:54:13 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
class	Animal
{
	protected:
		std::string	type;
	
	public:
		Animal( void );
		virtual ~Animal( void ) = 0;
		Animal( Animal const& cpy );
		Animal& operator=( Animal const& cpy );

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
		
};

#endif
