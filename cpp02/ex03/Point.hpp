/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:23:49 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/12 14:43:33 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const Point &copy);
		Point(const Fixed x, const Fixed y);
		~Point();
		Point &operator=(const Point &copy);
		Fixed getX() const;
		Fixed getY() const;
};

// bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif