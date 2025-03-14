/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:16:00 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/14 08:16:00 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
# include <stdexcept>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span();
        Span(const Span &s);
        Span &operator=(const Span &s);
        ~Span();
        Span(unsigned int n);
        void addNumber(int n);
        int shortestSpan() const;
        int longestSpan() const;
        class FullSpanException : public std::exception
        {
            virtual const char *what() const throw();
        };

        class NoSpanException : public std::exception
        {
            virtual const char *what() const throw();
        };

        // class NotEnoughNumbersException : public std::exception
        // {
        //     virtual const char *what() const throw();
        // };

        class OutOfSizeException : public std::exception
        {
            virtual const char *what() const throw();
        };

        void    addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif