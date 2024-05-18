/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:42:29 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 21:42:32 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP 
# define ICE_HPP 

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const& cpy );
		Ice& operator=( Ice const& cpy );

		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif
