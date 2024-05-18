/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:41:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 22:45:00 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define INV_LIM 4

class Character: public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[INV_LIM];

	public:
		Character( std::string name );
		~Character( void );
		Character( Character const& cpy );
		Character&	operator=( Character const& cpy );

		std::string const&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
