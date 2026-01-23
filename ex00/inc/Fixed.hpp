/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:09:43 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/23 14:09:58 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    private:
        long long           _fp_val;
        static const int    _bits = 8;

    public:
        Fixed ();
        Fixed ( const Fixed& );
        Fixed&  operator= ( const Fixed& );
        int getRawBits() const;
        void setRawBits( int const );

        ~Fixed ();

};

#endif