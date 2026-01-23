/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:56:37 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/23 16:54:05 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {

    private:
        const Fixed     _x;
        const Fixed     _y;

    public:
        Point ( void );
        Point ( const float, const float );
        Point ( const Point& );

        const Fixed  getX (void);
        const Fixed  getY (void);

        Point&  operator= ( Point& );

        ~Point ();
};