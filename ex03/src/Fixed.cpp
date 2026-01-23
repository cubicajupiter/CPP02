/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:23:31 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/23 14:55:39 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//DEFAULT CONSTRUCTOR
Fixed::Fixed(void) : _fp_val(0) {
    std::cout << "Default constructor called" << std::endl;
}

//COPY CONSTRUCTOR
Fixed::Fixed(const Fixed& other) : _fp_val(other._fp_val) {
    std::cout << "Copy constructor called" << std::endl;
}

//CONSTRUCTOR INT TO FP
Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fp_val = n << this->_bits;
}

//CONSTRUCTOR FLOAT TO FP
Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    this->_fp_val = static_cast<int>(std::roundf(f * (1 << this->_bits)));
}

//CONVERT FIXED-POINT TO FLOAT
float   Fixed::toFloat(void) const {
    return static_cast<float>(this->_fp_val) / (1 << this->_bits);
}

//CONVERT FIXED-POINT TO INT
int Fixed::toInt(void) const {
    std::cout << "to float" << std::endl;
    return this->_fp_val >> this->_bits;
}

//COPY ASSIGNMENT OPERATOR
Fixed&   Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_fp_val = other.getRawBits();
    }
    return *this;
}

//COMPARISON OPERATORS
bool   Fixed::operator>(const Fixed& other) const {
    return this->_fp_val > other.getRawBits();
}

bool   Fixed::operator<(const Fixed& other) const {
    return this->_fp_val < other.getRawBits();
}

bool   Fixed::operator>=(const Fixed& other) const {
    return this->_fp_val >= other.getRawBits();
}

bool   Fixed::operator<=(const Fixed& other) const {
    return this->_fp_val <= other.getRawBits();
}

bool   Fixed::operator==(const Fixed& other) const {
    return this->_fp_val == other.getRawBits();
}

bool   Fixed::operator!=(const Fixed& other) const {
    return this->_fp_val != other.getRawBits();
}

//ARITHMETIC OPERATORS
Fixed   Fixed::operator+ ( const Fixed& other ) const {
    Fixed   result;

    result.setRawBits(this->_fp_val + other.getRawBits());
    return result;
}

Fixed   Fixed::operator- ( const Fixed& other ) const {
    Fixed   result;

    result.setRawBits(this->_fp_val - other.getRawBits());
    return result;
}

Fixed   Fixed::operator* ( const Fixed& other ) const {
    Fixed   result;

    result.setRawBits((this->_fp_val * other.getRawBits()) >> this->_bits);
    return result;
}

Fixed   Fixed::operator/ ( const Fixed& other ) const {
    Fixed   result;

    result.setRawBits((this->_fp_val << this->_bits) / other.getRawBits());
    return result;
}

//INCREMENT/DECREMENT OPERATORS
Fixed   Fixed::operator++ ( int ) {
    Fixed   temp = *this;

    ++(this->_fp_val);
    return temp;
}

Fixed&  Fixed::operator++ ( void ) {
    ++(this->_fp_val);
    return *this;
}

Fixed   Fixed::operator-- ( int ) {
    Fixed   temp = *this;

    --(this->_fp_val);
    return temp;
}

Fixed&  Fixed::operator-- ( void ) {
    --(this->_fp_val);
    return *this;
}

//DESTRUCTOR
Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

//GETTER
int Fixed::getRawBits(void) const {
    return this->_fp_val;
}

//SETTER
void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fp_val = raw;
}

Fixed&   Fixed::min( Fixed& a, Fixed& b ) {
    if (a <= b)
        return a;
    return b;
}

const Fixed&   Fixed::min( const Fixed& a, const Fixed& b ) {
    if (a <= b)
        return a;
    return b;
}

Fixed&   Fixed::max( Fixed& a, Fixed& b ) {
    if (a >= b)
        return a; 
    return b;
}

const Fixed&   Fixed::max( const Fixed& a, const Fixed& b ) {
    if (a >= b)
        return a;
    return b;
}

//STANDALONE
//INSERTION OPERATOR OVERLOAD
std::ostream&   operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}