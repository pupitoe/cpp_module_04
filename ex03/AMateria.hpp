/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:33:05 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 21:02:05 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria( std::string const & type );
		virtual ~AMateria( void );
		AMateria( AMateria const& cpy );
		AMateria& operator=( AMateria const& cpy );

		std::string const & getType( void ) const; //Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use(ICharacter& target);
};

#endif
