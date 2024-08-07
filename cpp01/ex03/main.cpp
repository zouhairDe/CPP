/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:55:11 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/07 00:35:16 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	/**  ========        INTRA TESTS        ========  **/
	std::cout << "/**  ========        INTRA TESTS        ========  **/" << std::endl;
	{
		Weapon club("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		}
		{
		Weapon club("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	/**  ========        MY TESTS        ========  **/
	std::cout << "/**  ========        MY TESTS        ========  **/" << std::endl;
	{
		Weapon ak47("ak47");
		HumanB BinLaden("BinLaden");
		HumanA Obama("Obama", ak47);
		BinLaden.attack();
		BinLaden.setWeapon(ak47);
		BinLaden.attack();
		ak47.setType("M16");
		BinLaden.attack();
		Obama.attack();
	}
	return 0;
}