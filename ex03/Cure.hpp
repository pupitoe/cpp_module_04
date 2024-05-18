/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:41:49 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 21:49:33 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP 
# define CURE_HPP 

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const& cpy );
		Cure& operator=( Cure const& cpy );

		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif
