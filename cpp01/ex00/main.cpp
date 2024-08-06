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
/*               TESTS FOR CPP01: EX00, BY ZOUDDACH | 42 . 1337               */
/*               TESTS FOR CPP01: EX00, BY ZOUDDACH | 42 . 1337               */

/* ************************************************************************** */

# include "Zombie.hpp"

int main( void ) {
	// First instance of the class Zombie
	Zombie zombie1("evaluator1");

	// Second instance of the class Zombie
	Zombie* zombie2 = zombie1.newZombie("evaluator2");

	// Third instance of the class Zombie
	zombie1.randomChump("evaluator3");
	delete zombie2;
	return (0);
}