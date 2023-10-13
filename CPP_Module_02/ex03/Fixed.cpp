/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:35:57 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/26 01:00:31 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Fixed::Fixed():fixed_nbr(0){
}

Fixed::Fixed(const Fixed &fixedPoint){
	*this = fixedPoint;
}

Fixed& Fixed::operator=(const Fixed &fixedPoint){
	if (this != &fixedPoint)
		fixed_nbr = fixedPoint.fixed_nbr;
	return *this;
}

Fixed::~Fixed(){
}

/*-----------------------------------------------------------------------------*/

Fixed::Fixed(const int a):fixed_nbr(a << raw_bits){
}

Fixed::Fixed(const float a):fixed_nbr(roundf(a * (1 << raw_bits))){
}

float Fixed::toFloat( void ) const{
	return static_cast<float>(fixed_nbr) / (1 << raw_bits);
}

int Fixed::toInt( void ) const{
	return (fixed_nbr >> raw_bits);
}

/*-------------------------------------------------------------------------------*/
/*                      comparison operators:                                    */
/*-------------------------------------------------------------------------------*/

bool Fixed::operator>(const Fixed &fixed)const{
	if (this->fixed_nbr > fixed.fixed_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed &fixed)const{
	if (this->fixed_nbr < fixed.fixed_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed &fixed)const{
	if (this->fixed_nbr >= fixed.fixed_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed &fixed)const{
	if (this->fixed_nbr <= fixed.fixed_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed &fixed)const{
	if (this->fixed_nbr == fixed.fixed_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed &fixed)const{
	if (this->fixed_nbr != fixed.fixed_nbr)
		return true;
	else
		return false;
		
}
	
/*-------------------------------------------------------------------------------*/
/*                      arithmetic operators:                                    */
/*-------------------------------------------------------------------------------*/


Fixed Fixed::operator+(const Fixed &fixedP)const{
	Fixed result;
	result = this->toFloat() + fixedP.toFloat();
	return result;
	
}

Fixed Fixed::operator-(const Fixed &fixedP)const{
	Fixed result;
	result = this->toFloat() - fixedP.toFloat();
	return result;
	
}

Fixed Fixed::operator*(const Fixed &fixedP)const{
	Fixed result;
	result = this->toFloat() * fixedP.toFloat();
	return result;
	
}

Fixed Fixed::operator/(const Fixed &fixedP)const{
	Fixed result;
	result = this->toFloat() / fixedP.toFloat();
	return result;
	
}

/*-------------------------------------------------------------------------------*/
/*                     increment/decrement operators:                            */
/*-------------------------------------------------------------------------------*/


Fixed Fixed::operator++(int){
	Fixed result = *this;
	this->fixed_nbr += 1;
	return result;
	
}

Fixed Fixed::operator--(int){
	Fixed result = *this;
	this->fixed_nbr -= 1;
	return result;
}

Fixed &Fixed::operator++(){
	this->fixed_nbr += 1;
	return *this;
}

Fixed &Fixed::operator--(){
	this->fixed_nbr -= 1;
	return *this;
}

/*-------------------------------------------------------------------------------*/
/*                     A static member function                                  */
/*-------------------------------------------------------------------------------*/

Fixed Fixed::min(Fixed &one, Fixed &two){
	if (one < two)
		return one;
	return two;
}

Fixed Fixed::min(const Fixed &one,const Fixed &two){
	if (one < two)
		return one;
	return two;
}

Fixed Fixed::max(Fixed &one, Fixed &two){
	if (one > two)
		return one;
	return two;
}

Fixed Fixed::max(const Fixed &one, const Fixed &two){
	if (one > two)
		return one;
	return two;
}
