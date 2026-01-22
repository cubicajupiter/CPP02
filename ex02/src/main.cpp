/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:27:00 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/22 17:41:28 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
    
    Fixed           a;
    Fixed const     b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

/*Since norm no longer applies, lemme write a tiny essay on fixed point values right here.
Fixed pointer values are floats stored as integers. I.e. they are integral ('kokonais') data types - same as ints or chars.
Being integral and fractional, fixed point values offer fractional precision like a float, but faster performance closer to int.
They are calculated by using a binary point (like a decimal point) that splits the integer's
"whole" part and "fractional" part around some fixed point in the integer's binary representation.
Defining a fixed point type requires two parameters: WIDTH of the representation & BINARY point position.
    
    width = 8   (means the integer is 8 bits long)
    bp = 3  (means the point is at position 3: i.e. 3 bits to its right are fractional and 5 bits are in the whole part.)
    e.g.    00010.110

In the number, the positions to the left of the point are 0, 1, 2 ... 
and to its right are -1, -2, -3 ...

the calculation is done by calculating each 1-bit as a magnification of 2 to the power of its position, multiplying each by 1, and adding them up:

w = 8, b = 3:
00010.110  -->  1 * (2^1) + 1 * (2^-1) + 1 * (2^-2)  -->  2.75

w = 8, b = 5:
000.10110  -->  1 * (2^-1) + 1 * (2^-3) + 1 * (2^-4) -->  0.6875

w = 5, b = 0:
10110  -->  1 * (2^4) + 1 * (2^2) + 1 * (2^1)  -->  22

Fixed point numbers are simply a bit shifted version of an integer.
The disadvantage of fixed point values compared to floats is the loss of range and precision.
The precision and range is determined by how many bits are shifted to the fractional side of the point.
3 bits = precision of 0.25
5 bits = precision of 0.0025

Also, modern processors usually come with dedicated floating point processors that are optimized for powerful
float arithmetics, which fixed-point cannot use. Hence floats tend to be faster than fp nowadays on modern systems.
*/