/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:44:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 19:48:56 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{	
	private:
		Brain	*brain;
	
	public:
		Cat( void );
		~Cat( void );
		Cat( Cat const& cpy );
		Cat& operator=( Cat const& cpy );

		void	makeSound( void ) const;
		Brain	*getBrain( void ) const;
		void	setIdea( std::string idea );
		void	printIdea( void ) const;
};

#endif
