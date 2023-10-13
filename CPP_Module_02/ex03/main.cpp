/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:22:57 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 04:19:49 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream& operator <<(std::ostream& os, const Fixed& fixed){
    os << fixed.toFloat();
	return os;
}

int main( void ) {

	Point a(1, 1);
	Point b(0, 1);
	Point c(1, 0);
	Point point(0.5, 0.5);
	
	bool check = bsp(a,b,c,point);
	if (check)
		std::cout << "True the point is inside the triangle!!";
	else
		std::cout << "False the point is outside the triangle!!";
}
