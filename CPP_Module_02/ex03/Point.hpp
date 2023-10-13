/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:57:35 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 03:34:35 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed const x; 
	Fixed const y;
public:
/*-----------------------------------------------------------------------------*/
/*				     Orthodox Canonical Form :    							   */
/*-----------------------------------------------------------------------------*/

	Point(); // ---> dufault constructor
	Point(const Point &PointPoint); // ---> copy constructor 
	Point &operator=(const Point &_Point); //--> Copy assignment operator 
	~Point();// destructo

/*-------------------------------------------------------------------------------*/
	Fixed getX() const;
	Fixed getY() const;
	
	Point(const float x, const float y);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif