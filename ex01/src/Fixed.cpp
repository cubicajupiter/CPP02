/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:23:31 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/21 18:06:56 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//DEFAULT CONSTRUCTOR
Fixed::Fixed(void) : _fp_val(0), _bits(8) {
    std::cout << "Default constructor called" << std::endl;
}

//COPY CONSTRUCTOR
Fixed::Fixed(const Fixed& other) : _fp_val(other._fp_val), _bits(8) {
    std::cout << "Copy constructor called" << std::endl;
}

//CONSTRUCTOR INT
Fixed::Fixed(const int n) : _bits(8) {
    this->_fp_val = ; //TODO
    ;
}

//CONSTRUCTOR FLOAT
Fixed::Fixed(const float f) : _bits(8) {
    this->_fp_val = ; //TODO
}

//CONVERT FIXED-POINT TO FLOAT
float   Fixed::toFloat(void) const {
    ; //TODO
}

//CONVERT FIXED-POINT TO INT
int Fixed::toInt(void) const {
    //std::roundf(); returns a float representation of nearest integer to given float parameter.
    //TODO: WHY NOT JUST DIVIDE TO GET THE FLOAT?
}

//COPY ASSIGNMENT OPERATOR
Fixed&   Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_fp_val = other._fp_val;
    }
    return *this;
}

//DESTRUCTOR
Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

//GETTER
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fp_val;
}

//SETTER
void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fp_val = raw;
}


//STANDALONE
//INSERTION OPERATOR OVERLOAD
std::ostream&   operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.getRawBits();
    return os;
}