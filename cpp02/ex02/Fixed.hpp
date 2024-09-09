/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:51:51 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/15 00:05:46 by zouddach         ###   ########.fr       */
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
		bool 			operator>(const Fixed &copy) const;
		bool 			operator<(const Fixed &copy) const;
		bool 			operator>=(const Fixed &copy) const;
		bool 			operator<=(const Fixed &copy) const;
		Fixed 			operator+(const Fixed &copy) const;
		Fixed 			operator*(const Fixed &copy) const;
		Fixed 			operator/(const Fixed &copy) const;
		Fixed 			operator-(const Fixed &copy) const;
		Fixed 			operator--( int );
		Fixed 			operator--( void );
		Fixed 			operator++( int );
		Fixed 			operator++( void );
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
		int				getRawBits(void) const;
		int				toInt(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif