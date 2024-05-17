/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:44:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 20:05:55 by tlassere         ###   ########.fr       */
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
		~Animal( void );
		Animal( Animal const& cpy );
		Animal& operator=( Animal const& cpy );

		std::string		getType(void);
		virtual void	makeSound(void);
};

#endif
