/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:09:43 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/22 18:38:26 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>

class Fixed {
    private:
        int                 _fp_val;
        static const int    _bits = 8;

    public:
        Fixed ( void );
        Fixed ( const Fixed& );
        Fixed ( const int );
        Fixed ( const float );

        Fixed&  operator= ( const Fixed& );
        bool    operator> ( const Fixed& ) const;
        bool    operator< ( const Fixed& ) const;
        bool    operator>= ( const Fixed& ) const;
        bool    operator<= ( const Fixed& ) const;
        bool    operator== ( const Fixed& ) const;
        bool    operator!= ( const Fixed& ) const;

        int     operator+ ( const Fixed& ) const;
        int     operator- ( const Fixed& ) const;
        int     operator* ( const Fixed& ) const;
        int     operator/ ( const Fixed& ) const;

        Fixed   operator++ ( int );
        Fixed&  operator++ ( void );
        Fixed   operator-- ( int );
        Fixed&  operator-- ( void );

        int     getRawBits ( void ) const;
        void    setRawBits ( int const );
        float   toFloat ( void ) const;
        int     toInt ( void ) const;

        static Fixed&   min ( Fixed&, Fixed& );
        static Fixed&   min ( const Fixed&, const Fixed& );
        static Fixed&   max ( Fixed&, Fixed& );
        static Fixed&   max ( const Fixed&, const Fixed& );

        ~Fixed ( void );
};

std::ostream&    operator<< ( std::ostream&, const Fixed& );