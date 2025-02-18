/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:57:15 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/12 21:16:17 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string input) : _input(input)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    *this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src)
{
    if (this != &src)
    {
        this->_input = src._input;
    }
    return *this;
}

void ScalarConverter::convert(std::string input)
{
    std::cout << "Conversion of " << input << std::endl;
    toChar(input);
    toInt(input);
    toFloat(input);
    toDouble(input);
}

int ScalarConverter::toInt(std::string input)
{
    int i;
    try
    {
        i = std::stoi(input);
        std::cout << "Int: " << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Int: impossible" << std::endl;
    }
    return i;
}

float ScalarConverter::toFloat(std::string input)
{
    float f;
    try
    {
        f = std::stof(input);
        std::cout << "Float: " << f << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Float: impossible" << std::endl;
    }
    return f;
}

double ScalarConverter::toDouble(std::string input)
{
    double d;
    try
    {
        d = std::stod(input);
        std::cout << "Double: " << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Double: impossible" << std::endl;
    }
    return d;
}

char ScalarConverter::toChar(std::string input)
{
    char c;
    try
    {
        c = std::stoi(input);
        if (c < 32 || c > 126)
            std::cout << "Char: Non displayable" << std::endl;
        else
            std::cout << "Char: " << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Char: impossible" << std::endl;
    }
    return c;
}