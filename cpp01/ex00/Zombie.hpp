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

		Zombie( std::string name );
		~Zombie( void );
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
};

# endif