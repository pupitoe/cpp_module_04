/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chris.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:45:32 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 16:45:36 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHRIS_HPP 
# define CHRIS_HPP 

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Chris: public AMateria
{
	public:
		Chris( void );
		~Chris( void );
		Chris( Chris const& cpy );
		Chris& operator=( Chris const& cpy );

		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif
