/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 02:27:57 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/07 03:09:29 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main( int ac, char **av ) {
	if (ac != 2) {
		std::cout << "Usage: ./HarlFilter [LeveL]" << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(av[1]);
	return (0);
}