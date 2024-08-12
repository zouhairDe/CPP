/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:53:05 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/11 13:28:39 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	_value = num << _fraction;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(num * (1 << _fraction));
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

float	Fixed::toFloat( void ) const
{
	float	tmp;
	int		sign;
	int		intmp;

	intmp = std::abs(_value);
	_value < 0 ? (sign = -1, intmp = _value - 1, intmp=~intmp) : sign = 1;
	tmp = ((1.0 * intmp) / (1 << _fraction) * sign);
	return (tmp);
	// return ((float)_value / (1 << _fraction));
}

//e.g: For 16bits system, 1 bit for sign, 8 bits for integer part, 7 bits for fraction part
//For Q(m, n); Range is -2^(m-1) to 2^(m-1) - 2^(-n) = [-2^-n]
//For UQ(m, n); Range is 0 to 2^m - 2^(-n) = [-2^-n]
//but why not????
/*
	float	tmp;
	int		sign;
	int		intmp;

	intmp = std::abs(_value);
	_value < 0 ? (sign = -1, intmp = _value - 1, intmp=~intmp) : sign = 1;
	tmp = ((1.0 * intmp) / (1 << _fraction) * sign);
	return (tmp);
*/

int		Fixed::toInt( void ) const
{
	return (_value >> _fraction);
}