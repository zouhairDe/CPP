/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:52:50 by marvin            #+#    #+#             */
/*   Updated: 2024/08/06 17:52:50 by marvin           ###   ########.fr       */
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

	// Deleting the horde
	delete [] horde;
	return (0);
}