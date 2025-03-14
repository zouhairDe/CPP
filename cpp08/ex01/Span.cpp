/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 08:20:00 by zouddach          #+#    #+#             */
/*   Updated: 2025/03/14 08:20:00 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span()
{
    _n = 0;
}

Span::Span(const Span &s)
{
    *this = s;
}

Span &Span::operator=(const Span &s)
{
    _n = s._n;
    _v = s._v;
    std::cout << "Assignation operator called with n = " << _n << " and v.size() = " << _v.size() << std::endl;
    return *this;
}

Span::~Span()
{
}

Span::Span(unsigned int n)
{
    _n = n;
}

void    Span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw FullSpanException();
}

int     Span::shortestSpan() const
{
    if (_v.size() < 2)
        throw NoSpanException();
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size() - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return min;
}

int     Span::longestSpan() const
{
    if (_v.size() < 2)
        throw NoSpanException();
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

const char *Span::FullSpanException::what() const throw()
{
    return "The span is full";
}

const char *Span::NoSpanException::what() const throw()
{
    return "There is no span to calculate";
}

const char *Span::OutOfSizeException::what() const throw()
{
    return "The span new size gonna exceed the limit";
}

void    Span::addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_v.size() + std::distance(begin, end) > _n)
        throw OutOfSizeException();
    _v.insert(_v.end(), begin, end);
}