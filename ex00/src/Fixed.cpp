/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:23:31 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/21 13:05:59 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

//DEFAULT CONSTRUCTOR
Fixed::Fixed(void) : _fp_val(0) {
    std::cout << "Default constructor called" << std::endl;
}

//COPY CONSTRUCTOR
Fixed::Fixed(const Fixed& other) : _fp_val(other._fp_val) {
    std::cout << "Copy constructor called" << std::endl;
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

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fp_val;
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fp_val = raw;
}