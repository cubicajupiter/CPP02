/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:56:37 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/26 15:21:37 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

//INDEXES FOR VERTICES OF A TRIANGLE
#define A   0
#define B   1
#define C   2

class Point {

    private:
        Fixed const     _x;
        Fixed const     _y;

    public:
        Point ( void );
        Point ( const float, const float );
        Point ( const Point& );

        const Fixed  getX (void) const;
        const Fixed  getY (void) const;

        Point&  operator= ( Point& );

        ~Point ();
};

bool    bsp( Point const a, Point const b, Point const c, Point const point );