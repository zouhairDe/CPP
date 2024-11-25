/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:48:59 by zouddach          #+#    #+#             */
/*   Updated: 2024/10/21 17:55:34 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string *ideas;
        Brain();
        Brain(const Brain &b);
        Brain &operator=(const Brain &b);
        ~Brain();
		std::string to_string(int num) const;
};

#endif