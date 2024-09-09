/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:17:05 by zouddach          #+#    #+#             */
/*   Updated: 2024/09/09 09:18:14 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void) {
	ClapTrap claptrap("Claptrap");
	ScavTrap scavtrap("Scavtrap");
	FragTrap fragtrap("Fragtrap");
	DiamondTrap diamondtrap("Diamondtrap");
	diamondtrap.whoAmI();

  return 0;
}