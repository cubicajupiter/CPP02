/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:56:52 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/26 16:43:19 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

// COPY ASSIGNMENT OPERATOR OVERLOAD
Point&  Point::operator=(Point& p) {
    (void) p;
    return p;
}

const Fixed  Point::getX(void) const {
    return this->_x;
}


const Fixed  Point::getY(void) const {
    return this->_y;
}


Point::~Point() {}