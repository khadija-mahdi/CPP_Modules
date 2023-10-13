/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:35:57 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 04:09:38 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static const int raw_bits = 8;

Fixed::Fixed():fixed_nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixedPoint){
	std::cout << "copy constructor called" << std::endl;
	*this = fixedPoint;
}


Fixed& Fixed::operator=(const Fixed &fixedPoint){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixedPoint)
		fixed_nbr = fixedPoint.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw) 
{
		fixed_nbr = raw;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_nbr;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
