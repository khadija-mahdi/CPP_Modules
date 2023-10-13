/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:02:38 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/18 19:58:13 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
private:
	std::string name; 
	Weapon club;
	Weapon &_Weapon;
public:
	HumanA();
	HumanA(const std::string &_name, Weapon &club);
	~HumanA();
	void attack();
};

#endif