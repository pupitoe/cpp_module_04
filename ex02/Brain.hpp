/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:44:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/18 16:39:04 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP 
# define BRAIN_HPP 

# define COUNT_IDEA 100

# include <iostream>

class	Brain
{
	private:
		std::string ideas[COUNT_IDEA];
	
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const& cpy );
		Brain& operator=( Brain const& cpy );

		void	set_ideas( std::string idea );
		void	set_idea( int pos, std::string idea );
		void	print_ideas( int start, int end ) const;
};

#endif
