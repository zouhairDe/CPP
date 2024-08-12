/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:51:51 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/11 14:46:53 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int 				_value;
		static const int	_fraction = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed 			&operator=(const Fixed &copy);
		bool 			operator==(const Fixed &copy) const;
		bool 			operator!=(const Fixed &copy) const;
		Fixed 			operator+(const Fixed &copy) const;
		Fixed 			operator*(const Fixed &copy) const;
		Fixed 			operator/(const Fixed &copy) const;
		Fixed 			operator-(const Fixed &copy) const;
		Fixed 			operator--( int ) const;
		Fixed 			operator--( void ) const;
		Fixed 			operator++( int ) const;
		Fixed 			operator++( void ) const;
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&	max(const Fixed& a, const Fixed& b);
		int				getRawBits(void) const;
		int				toInt(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif