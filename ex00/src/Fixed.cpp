#include  "Fixed.hpp"

//DEFAULT CONSTRUCTOR
Fixed::Fixed(void) {
    ;
}

//COPY CONSTRUCTOR
Fixed::Fixed(const Fixed& other) {
    ;
}

//COPY ASSIGNMENT OPERATOR
Fixed&   Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        
    }
}

//DESTRUCTOR
Fixed::~Fixed(void) {
    ;
}

int Fixed::getRawBits(void) const {
    return this->bits;
}

void    Fixed::setRawBits(int const raw) {
    this->bits = raw;
}