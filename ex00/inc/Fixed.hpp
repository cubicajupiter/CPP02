/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:09:43 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/20 15:39:28 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed {
    private:
        int                 fp_val;
        static const int    bits = 8;

    public:
        Fixed ( void );
        Fixed ( const Fixed& );
        Fixed&  operator= ( const Fixed& );
        int getRawBits( void ) const;
        int setRawBits( int const );

        ~Fixed ( void );
};