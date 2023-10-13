/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:47:02 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/15 19:34:54 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <limits>

class Zombie{
public:
	Zombie(std::string zombie_name);
	~Zombie();
	void announce( void );
private:
	std::string name;
};

Zombie* newZombie(std::string name );
void randomChump(std::string name );

#endif