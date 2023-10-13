/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:54:30 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/20 15:47:14 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
 #include <cstdlib>

class Zombie{
public:
	Zombie();
	~Zombie();

	void  setName(std::string zombie_name);
	void announce( void );
private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif