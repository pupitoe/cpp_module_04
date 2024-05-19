/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:46:11 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 15:33:19 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATARIASOURCE_HPP
# define MATARIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Character.hpp"

class	MateriaSource: public IMateriaSource
{
	private:
		AMateria	*brain[4];

	public:
		MateriaSource( void );
		~MateriaSource();
		MateriaSource( MateriaSource const& cpy );
		MateriaSource&	operator=( MateriaSource const& cpy );

		void		learnMateria( AMateria* materia );
		AMateria*	createMateria( std::string const & type );
};

#endif
