/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:44:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 14:43:56 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal( void );
		~WrongAnimal( void );
		WrongAnimal( WrongAnimal const& cpy );
		WrongAnimal& operator=( WrongAnimal const& cpy );

		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif
