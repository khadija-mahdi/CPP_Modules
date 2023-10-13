/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 01:57:19 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/28 04:25:05 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed absFixed(Fixed Triangle) {
    if (Triangle < 0)
        return Triangle * -1;
    return Triangle;
}

Fixed getTriangleEria(Point const a, Point const b, Point const c) {
    Fixed TriangleEria = (Fixed)(0.5f) * absFixed(
        (a.getX() * (b.getY() - c.getY())) +
        (b.getX() * (c.getY() - a.getY())) +
        (c.getX() * (a.getY() - b.getY()))
    );
    return TriangleEria;
}


bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed belovedTriangle = getTriangleEria(a, b, c);
	Fixed Triangle = getTriangleEria(a, b, point);
	Fixed TriangleTwo = getTriangleEria(a, point, c);
	Fixed TriangleThree = getTriangleEria(point, b, c);
    if (Triangle == 0 ||  TriangleTwo == 0 || TriangleThree == 0)
    {
        return false;
    }
	if (belovedTriangle == (Triangle + TriangleTwo + TriangleThree))
		return true;
	return false;
	
}
