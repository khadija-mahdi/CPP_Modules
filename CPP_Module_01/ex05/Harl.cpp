/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:53:56 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/19 13:28:17 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
	std::cout << "I love having extra bacon for"
			  <<" my 7XL-double-cheese-triple"
		      << "-pickle-specialketchup burger."
			  << "I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money." 
			  << "You didn’t put "
			  << "enough bacon in my burger! If you did , " 
			  <<"I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free."
			<< "I’ve been coming for years whereas you started working "
			<< "here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	size_t i = 0;
	void (Harl::*ptr_harl[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	std::string levels[4] = {"DEBUG","INFO" ,"WARNING","ERROR"};
	for (i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*ptr_harl[i])();
			break;
		}
	}
	if (i == 4)
		std::cout << "Worng Level ..!";
}
