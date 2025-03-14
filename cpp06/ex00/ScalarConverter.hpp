/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:56:22 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/24 10:10:39 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>


class ScalarConverter
{
    private:
        std::string	_input;
        ScalarConverter();
    public:
        ScalarConverter(std::string input);
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        ScalarConverter & operator=(ScalarConverter const & src);
        void	convert();
        void	intConverter() const;
		void	floatConverter() const;
		void	doubleConverter() const;
		void	charConverter() const;
		
		bool	isChar() const;
		bool	isInt() const;
		bool	isFloat() const;
		bool	isDouble() const;
};

#endif