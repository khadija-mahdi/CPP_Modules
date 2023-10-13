/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:57:29 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/20 12:14:33 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
private:
	std::string name; 
	Weapon *_Weapon;
public:
	HumanB(const std::string _name);
	HumanB(const std::string _name, Weapon club);
	~HumanB();
	void setWeapon(Weapon& club);
	void attack();
};

#endif