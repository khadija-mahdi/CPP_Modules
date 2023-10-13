/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:37:37 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/27 23:51:13 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
#define FIXED_CPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class Fixed{
private:
	int fixed_nbr;
	static const int raw_bits;
public:

/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Fixed(); // ---> dufault constructor
	Fixed(const Fixed &fixedPoint); // ---> copy constructor 
	Fixed &operator=(const Fixed &fixedPoint); //--> Copy assignment operator 
	~Fixed();// destructo

/*-------------------------------------------------------------------------------*/

/*---------------------------------------------*/
	Fixed(const int a); // int constructor 
	Fixed(const float a); // float constructor 
/*----------------------------------------------*/

/*------------------------------*/
	float toFloat( void ) const;
	int toInt( void ) const;
/*------------------------------*/

/*-------------------------------------------------------------------------------*/
/*                      comparison operators:                                    */
/*-------------------------------------------------------------------------------*/
	bool operator>(const Fixed &fixedP)const;
	bool operator<(const Fixed &fixedP)const;
	bool operator>=(const Fixed &fixedP)const;
	bool operator<=(const Fixed &fixedP)const;
	bool operator==(const Fixed &fixedP)const;
	bool operator!=(const Fixed &fixedP)const;
	
/*-------------------------------------------------------------------------------*/
/*                      arithmetic operators:                                    */
/*-------------------------------------------------------------------------------*/

	Fixed operator+(const Fixed &fixedP)const;
	Fixed operator-(const Fixed &fixedP)const;
	Fixed operator*(const Fixed &fixedP)const;
	Fixed operator/(const Fixed &fixedP)const;

/*-------------------------------------------------------------------------------*/
/*                     increment/decrement operators:                            */
/*-------------------------------------------------------------------------------*/

	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int) ;

/*-------------------------------------------------------------------------------*/
/*                     A static member function                                  */
/*-------------------------------------------------------------------------------*/
	static Fixed min(Fixed &one, Fixed &two);
	static Fixed min(const Fixed &one,const Fixed &two);
	static Fixed max(Fixed &one, Fixed &two);
	static Fixed max(const Fixed &one, const Fixed &two);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif