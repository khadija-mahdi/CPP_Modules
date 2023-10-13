/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:21:59 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 03:40:00 by kmahdi           ###   ########.fr       */
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
	Fixed(); // dufault constructor

	Fixed(Fixed &fixedPoint); // copy constructor 

	~Fixed();// destructo

	Fixed &operator=(const Fixed &fixedPoint);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

// prototypes ---->


#endif