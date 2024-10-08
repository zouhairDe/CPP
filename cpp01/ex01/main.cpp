/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:52:50 by marvin            #+#    #+#             */
/*   Updated: 2024/08/07 00:36:49 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*               TESTS FOR CPP01: EX01, BY ZOUDDACH | 42 . 1337               */
/*               TESTS FOR CPP01: EX01, BY ZOUDDACH | 42 . 1337               */

/* ************************************************************************** */

# include "Zombie.hpp"

int main( void ) {
	// heap Allocation for a Zombie horde
	Zombie* horde = zombieHorde(5, "STAFF");
	if (horde == NULL) {
		return (1);
	}

	// Deleting the horde
	delete [] horde;
	return (0);
}