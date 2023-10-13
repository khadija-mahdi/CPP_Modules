/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:22:57 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 03:59:48 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator <<(std::ostream& os, const Fixed& fixed){
    os << fixed.toFloat();
	return os;
}

int main( void ) {

	Fixed a(10.88f);
	Fixed b(-10.88f);

/*-------------------------------------------------------------------------------*/
/*                      comparison operators:                                    */
/*-------------------------------------------------------------------------------*/

/*
	std::cout << "\n---------- comparison operators:---------------\n" <<std::endl;
	if (a == b)
		std::cout << "a is equal to b!! :)" << std::endl;
	if (a != b)
		std::cout << "a is not equal to  b!! :)" << std::endl;
	if (a > b)
		std::cout << "a is bigger  then b!! :)" << std::endl;
	if (a < b)
		std::cout << "a is less then b !! :)" << std::endl;
	if (a >= b)
		std::cout << "a is bigger or equal to b !! :)" << std::endl;
	if (a <= b)
		std::cout << "a is less or equal to b !! :)" << std::endl;
*/

/*-------------------------------------------------------------------------------*/
/*                      arithmetic operators:                                    */
/*-------------------------------------------------------------------------------*/

/*
	std::cout << "\n---------arithmetic operators:-----------------\n" <<std::endl;

	std::cout << "a : " << a << ",  b : "  << b << std::endl;
	std::cout << "a + b ==> : " << a + b << std::endl;
	std::cout << "a - b ==> : " << a - b << std::endl;
	std::cout << "a * b ==> : " << a * b << std::endl;
	std::cout << "a / b ==> : " << a / b << std::endl;
*/

/*-------------------------------------------------------------------------------*/
/*                     increment/decrement operators:                            */
/*-------------------------------------------------------------------------------*/

/*
	std::cout << "\n-------increment/decrement operators:----------\n" <<std::endl;

	std::cout << "a in a++: " << a++ << std::endl;
	std::cout << "a after a++: " << a << std::endl;
	
	std::cout <<  std::endl;
	
	std::cout << "b in b--: " << b-- << std::endl;
	std::cout << "b after b--: " << b << std::endl;

	std::cout <<  std::endl;

	std::cout << "b in ++b: " << ++b << std::endl;
	std::cout << "b after ++b: " << b << std::endl;

	std::cout <<  std::endl;
	
	std::cout << "a in --a: " << --a << std::endl;
	std::cout << "a after --a: " << a << std::endl;
*/


/*-------------------------------------------------------------------------------*/
/*                              main test:                                       */
/*-------------------------------------------------------------------------------*/

// /*
	{
		std::cout << "\n--------------------main test------------------\n" <<std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
	
		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}

// */

}
