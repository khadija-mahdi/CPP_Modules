/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 01:58:22 by kmahdi            #+#    #+#             */
/*   Updated: 2023/09/05 03:34:12 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*-----------------------------------------------------------------------------*/
/*				        Orthodox Canonical Form :    						   */
/*-----------------------------------------------------------------------------*/

Brain::Brain(){
		std::cout <<"Brain "<< "default constructor called :)" << std::endl;
}

Brain::Brain(const Brain &brain){
	*this = brain;
}

Brain& Brain::operator=(const Brain &brain){
	if (this != &brain){
		for (int i = 0;i < 100; i++){
			this->ideas[i] = brain.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(){
	std::cout <<"Brain " << "destructor called :)" << std::endl;
}

/*------------------------------------------------------------------------*/
/*                                member functions                        */
/*------------------------------------------------------------------------*/

std::string Brain::getIdea(int i) const{
		// std::cout << ideas[i] << "\n\n\n";
	return 	ideas[i];
}

void Brain::setIdea(const std::string &idea, int i){
	ideas[i] = idea;
	// std::cout << ideas[i] << "\n\n\n";
}
/*-------------------------------------------------------------------------------------------*/