/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:17:05 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/09 08:50:15 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void) {
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2(claptrap);
	ClapTrap claptrap3 = claptrap;

	claptrap.attack("enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);

	std::cout << "/------------- ScavTrapTest: -------------\\" << std::endl;
	ScavTrap scavtrap("Scavtrap");
	ScavTrap scavtrap2("scavtrap2");
	ScavTrap scavtrap3 = scavtrap;

	scavtrap.attack("scavtrap2");
	scavtrap2.takeDamage(5);

  return 0;
}