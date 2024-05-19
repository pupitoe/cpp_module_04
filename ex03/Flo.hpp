/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Flo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:42:29 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 16:41:47 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLO_HPP 
# define FLO_HPP 

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Flo: public AMateria
{
	public:
		Flo( void );
		~Flo( void );
		Flo( Flo const& cpy );
		Flo& operator=( Flo const& cpy );

		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif
