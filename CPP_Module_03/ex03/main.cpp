/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:33:02 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/31 05:20:47 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main(){
	DiamondTrap DiamondTrap("khadija");
	DiamondTrap.whoAmI();
	DiamondTrap.attack("mahdi");
	DiamondTrap.takeDamage(2);
}