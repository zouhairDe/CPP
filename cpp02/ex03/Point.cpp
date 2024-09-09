/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:25:59 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/12 19:03:44 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {}

Point::~Point() {}

Point &Point::operator=(const Point &copy)
{
    const_cast<Fixed&>(this->_x) = copy._x;
    const_cast<Fixed&>(this->_y) = copy._y;

    return *this;
}

bool Point::operator==(const Point &copy) const
{
	return (_x == copy._x && _y == copy._y);
}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed ABC = (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());
	Fixed ABP = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed BCP = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
	Fixed CAP = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

	if (ABP == 0 || BCP == 0 || CAP == 0)
		return false;
	return (ABP + BCP + CAP == ABC);
}