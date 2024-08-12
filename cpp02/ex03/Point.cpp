/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:25:59 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/12 14:43:25 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

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

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed x = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
// 	Fixed y = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
// 	Fixed z = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

// 	if ((x >= 0 && y >= 0 && z >= 0) || (x <= 0 && y <= 0 && z <= 0))
// 		return true;
// 	return false;
// }