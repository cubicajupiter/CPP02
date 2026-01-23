/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:56:52 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/23 16:54:01 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}


Point&  Point::operator=(Point& p) {
    if (this != &p) {
        this->_x = p.getX(); //WHY IS THERE NO = OPERATOR FOR FIXED CLASS, even though one was made
        this->_y = p.getY();
    }
    return *this;
}

const Fixed  Point::getX(void) {
    return this->_x;
}


const Fixed  Point::getY(void) {
    return this->_y;
}


Point::~Point() {}