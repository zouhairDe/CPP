/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:57:15 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/24 14:00:44 by zouddach         ###   ########.fr       */
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

void ScalarConverter::convert()
{
	if (_input == "nan" || _input == "nanf" || _input == "+inf" || _input == "+inff" || _input == "-inf" || _input == "-inff")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << _input << std::endl;
		std::cout << "Double: " << _input << std::endl;
		return;
	}
	try {
		if (isChar())
			charConverter();
		else if (isInt())
			intConverter();
		else if (isFloat())
			floatConverter();
		else if (isDouble())
			doubleConverter();
		else
			std::cout << "Conversion of " << _input << std::endl
						<< "Char: impossible" << std::endl
						<< "Int: impossible" << std::endl
						<< "Float: impossible" << std::endl
						<< "Double: impossible" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

bool	ScalarConverter::isChar() const
{
	return ((_input.length() == 3 && _input[0] == '\'' && _input[2] == '\'') 
		|| _input.length() == 1);
}

bool	ScalarConverter::isInt() const
{
	if (_input.length() == 1 && !isdigit(_input[0]))
		return (true);
	if (_input.length() > 1 && (_input[0] == '+' || _input[0] == '-'))
		return (std::all_of(_input.begin() + 1, _input.end(), isdigit));
	return (std::all_of(_input.begin(), _input.end(), isdigit));
}

bool	ScalarConverter::isFloat() const
{
	size_t	i;
	bool	found = false;

	if (!isdigit(_input[0]) && _input[0] != '+' && _input[0] != '-')
		return (false);
	if ((_input[0] == '+' || _input[0] == '-') && _input.length() <= 1)
		return (false);
	for (i = 1; i < _input.length(); i++)
	{
		if (!isdigit(_input[i]))
		{
			if (i == _input.length() - 1)
				return (_input[i] == 'f');
			if (_input[i] == '.')
			{
				if (found)
					return (false);
				found = true;
			}
			else
				return (false);
		}
	}
	return (false);
}

bool	ScalarConverter::isDouble() const {
	if (_input.length() == 1 && !isdigit(_input[0]))
		return (false);
	if (_input.length() > 1 && (_input[0] == '+' || _input[0] == '-'))
		return (std::all_of(_input.begin() + 1, _input.end(), isdigit) || _input.find('.') != std::string::npos);
	return (std::all_of(_input.begin(), _input.end(), isdigit) || _input.find('.') != std::string::npos);
}

void	ScalarConverter::charConverter() const
{
	std::cout << "Conversion from char" << std::endl;
	std::cout << "Char: ";
	char c;
	
	if (_input.size() == 3)
		c = _input[1];
	else
		c = _input[0];
	if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(c) << std::endl;
	std::cout << "Float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::intConverter() const
{
	int		i;
	
	i = std::stoi(_input);
	std::cout << "Conversion from int" << std::endl;
	if (i < 32 || i > 126)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "Int: " << i << std::endl;
	std::cout << "Float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	ScalarConverter::floatConverter() const
{
	float	f;

	f = std::stof(_input);
	std::cout << "Converting from Float" << std::endl;
	if (f < 32 || f > 126)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(f) << std::endl;
	std::cout << "Float: " << f << "f" << std::endl;
	std::cout << "Double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::doubleConverter() const
{
	double	d;

	d = std::stod(_input);
	std::cout << "Converting from Double" << std::endl;
	if (d < 32 || d > 126)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(d) << std::endl;
	std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "Double: " << d << std::endl;
}