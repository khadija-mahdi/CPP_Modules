/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 23:33:02 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/04 21:35:24 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main(){
	FragTrap FragTrap("khadija");
	FragTrap.takeDamage(10);
	FragTrap.beRepaired(10);
	FragTrap.attack("enemy");
	FragTrap.highFivesGuys();
}