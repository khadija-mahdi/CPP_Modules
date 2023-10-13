/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:21:59 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/25 21:36:37 by kmahdi           ###   ########.fr       */
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
	static const int raw_bits = 8;
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


};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);



#endif