/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:56:48 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/23 16:54:04 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define A   0
#define B   1
#define C   2

static bool    is_inside( const Point triangle[], const Point p );

bool    bsp( Point const a, Point const b, Point const c, Point const point ) {
    const Point     triangle[3] = {a, b, c};

    if (is_inside(triangle, point))
        return true;
    else return false;
}

static bool    is_inside( const Point triangle[], const Point p ) {
    ;
}

//standard      Ax + By + C = 0     formula
    //p = (x, y)
    //Ax + By + C

    //if positive, point is in front,
    //if negative, point is in back
    ///if zero, point is on line

//https://www.jordansavant.com/book/algorithms/binary_space_partitioning.md
//  Two connected vertices define a LineDef
// A LineDef has an outward face to define which side of it is considered open and which side is solid
// A list of LineDefs form a Polygon that can define the boundaries of a room, or "sector"

// A Binary Space Partition class accepts the worlds list of LineDefs
// The BSP chooses a best candidate "splitter" LineDef by which to judge all other LineDefs
// The BSP creates two child BSPs to place other LineDefs behind or in front of the splitter
// LineDefs that cross the plane of the splitter and split into smaller LineDefs to be sorted
// The BSP sorts all LineDefs recursively in the child trees
// Using the BSP we can test whether a position is in open space with a depth search
// Using the BSP we can also render all walls from either back to front or front to back
// Doom rendered them front to back and used culling to prevent overdraw
// Other engines have rendered back to front called the Painters Algorithm
// The BSP Tree is built before the game begins as a means of significant performance gain
    