/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:33:02 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 21:39:39 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap scavTrap("khadija");
	scavTrap.attack("Enemy");
	scavTrap.takeDamage(9);
	scavTrap.beRepaired(9);
    scavTrap.guardGate();

}