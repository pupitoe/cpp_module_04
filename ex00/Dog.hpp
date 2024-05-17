/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:44:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 19:48:56 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog( void );
		~Dog( void );
		Dog( Dog const& cpy );
		Dog& operator=( Dog const& cpy );

		virtual void	makeSound(void);
};

#endif
