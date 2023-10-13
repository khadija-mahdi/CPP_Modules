/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:11:02 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 03:34:30 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Point.hpp"
 #include "Fixed.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Point::Point():x(0), y(0){
}

Point::Point(const float x, const float y) : x(x), y(y){
}

Point::Point(const Point &point){
	*this = point;
}

Point& Point::operator=(const Point &tPoint){
	if (this != &tPoint)
	{
        const_cast<Fixed&>(x) = tPoint.x;
        const_cast<Fixed&>(y) = tPoint.y;
	}
	return *this;
}

Point::~Point(){
}
/*-----------------------------------------------------------------------------*/

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY()const{
	return y;
}

