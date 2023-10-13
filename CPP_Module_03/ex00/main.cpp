/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:33:02 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 22:25:36 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap unamed;
	
	ClapTrap ClapTrap("kmahdi");
	ClapTrap.attack("mahdi");
	unamed.takeDamage(5);
	ClapTrap.takeDamage(8);
	ClapTrap.takeDamage(1);
	ClapTrap.beRepaired(5);
	ClapTrap.beRepaired(5);
	ClapTrap.attack("mahdi");
}
