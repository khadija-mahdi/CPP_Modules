/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:35:57 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/26 00:55:31 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Fixed::Fixed():fixed_nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixedPoint){
	std::cout << "copy constructor called" << std::endl;
	*this = fixedPoint;
}

Fixed& Fixed::operator=(const Fixed &fixedPoint){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixedPoint)
		fixed_nbr = fixedPoint.fixed_nbr;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/*-----------------------------------------------------------------------------*/

Fixed::Fixed(const int a):fixed_nbr(a << raw_bits){
	std::cout << "Int constructor called" << std::endl;
	
}

Fixed::Fixed(const float a):fixed_nbr(roundf(a * (1 << raw_bits))){
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	return static_cast<float>(fixed_nbr) / (1 << raw_bits);
}

int Fixed::toInt( void ) const{
	return (fixed_nbr >> raw_bits);
}
