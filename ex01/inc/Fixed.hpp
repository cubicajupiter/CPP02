/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:09:43 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/21 17:03:21 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>

class Fixed {
    private:
        int                 _fp_val;
        static const int    _bits;

    public:
        Fixed ( void );
        Fixed ( const Fixed& );
        Fixed ( const int );
        Fixed ( const float );

        Fixed&  operator= ( const Fixed& );

        int     getRawBits( void ) const;
        void    setRawBits( int const );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        ~Fixed ();
};

std::ostream&    operator<< ( std::ostream&, const Fixed& );