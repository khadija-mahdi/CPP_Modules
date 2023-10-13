/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:48:15 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/18 20:36:56 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
public:
	Weapon();
	Weapon(const std::string &new_type);
	~Weapon();
	const std::string& getType()const;
	void setType(const std::string &_new);
private:
	std::string type; 
};

#endif