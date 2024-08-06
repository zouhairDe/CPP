/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:25:08 by marvin            #+#    #+#             */
/*   Updated: 2024/08/06 17:25:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		~Zombie( void );
		void announce( void );
		std::string getName( void ) const;
		void setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

# endif