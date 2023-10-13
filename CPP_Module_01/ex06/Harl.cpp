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
	std::cout << "[ DEBUG ]" << std::endl
			  <<"I love having extra bacon for"
			  <<" my 7XL-double-cheese-triple"
		      << "-pickle-specialketchup burger."
			  << "I really do!\n" << std::endl;
}

void Harl::info(){
	std::cout << "[ INFO ]" << std::endl
			  << "I cannot believe adding extra bacon costs more money." 
			  << "You didn’t put "
			  << "enough bacon in my burger! If you did , " 
			  <<"I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(){
	std::cout << "[ WARNING]" << std::endl 
			  << "I think I deserve to have some extra bacon for free."
			  << "I’ve been coming for years whereas you started working "
			  << "here since last month.\n" << std::endl;
}

void Harl::error(){
	std::cout << "[ ERROR ]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level){
	int i = 0;
	void (Harl::*ptr_harl[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	std::string levels[4] = {"DEBUG","INFO" ,"WARNING","ERROR"};
	for (i = 1; i <= 4; i++){
		if (levels[i - 1] == level)
			break ;
	}
	switch (i)
	{
		case 1 :
			(this->*ptr_harl[0])();
			(this->*ptr_harl[1])();
			(this->*ptr_harl[2])();
			(this->*ptr_harl[3])();
			break;
		case 2 :
			(this->*ptr_harl[1])();
			(this->*ptr_harl[2])();
			(this->*ptr_harl[3])();
			break ;
		case 3 :
			(this->*ptr_harl[2])();
			(this->*ptr_harl[3])();
			break;
		case 4 :
			(this->*ptr_harl[3])();
			break;
		default :
			std::cout <<"[ Probably complaining about insignificant problems ]";
	}
}

