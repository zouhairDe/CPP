/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:56:22 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 21:16:54 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>


class ScalarConverter
{
    private:
        std::string _input;
        ScalarConverter();
    public:
        ScalarConverter(std::string input);
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        ScalarConverter & operator=(ScalarConverter const & src);
        static void convert(std::string input);
        static int toInt(std::string input);
        static float toFloat(std::string input);
        static double toDouble(std::string input);
        static char toChar(std::string input);
};

#endif