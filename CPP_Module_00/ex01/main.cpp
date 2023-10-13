/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:48:29 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/17 18:59:31 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int StringSpace(std::string input){
	for (int i = 0; input[i] ; i++)
	{
		if (!isspace(input[i]))
			return 1;
	}
	return 0;
}

int NumberChecker(std::string input)
{
	for (size_t i = 0; i < input.length(); i++){
		if (!std::isdigit(input[i]) && !std::isspace(input[i]))
			return 0;
	}
	return 1;
}

int StringChecker(std::string input)
{
	for (size_t i = 0; i < input.length(); i++){
		if (!isalpha(input[i]) && !std::isspace(input[i]))
			return 1;
	}
	return 0;
}

std::string GetInput(std::string msg, int checker){
	std::string input;
	while (true)
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			exit(0);
        }
		if (input.empty() || !StringSpace(input))
		{
			std::cout << "try again !! " << std::endl;
			continue;
		}
		if (checker == 1 && NumberChecker(input) == 1) // ==> should be nbr;
			return (input);
		else if  (checker == 1 && !NumberChecker(input)){
				std::cout << " invalid Phone number , try again !! " << std::endl;
				continue;
		}
		else if (!checker  && !StringChecker(input))
			return input;
		else if (!checker && StringChecker(input) == 1 ){
			std::cout << " invalid Name , try again !! " << std::endl;
			continue;
		}
		else 
			return input;		
	}
	return input;
}

int GetIndex(){
	std::string input;
	int index;
	
	while (1)
	{
		std::cout << "Enter the index of the contact to display: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			exit(0);
        }
		std::istringstream Checker(input);
		if (input == "0")
			return 0;
		if (Checker >> index && index > 0 && index <= 7)
			return (index);
		else{
				std::cout << "Wrong index try again !! " << std::endl;
					continue;
		}
	}
	return index;
}

std::string AddDote(std::string name){
	int len = name.length();
	if (len > 10){
		name.replace(9, std::string::npos, ".");
		return name;
	}
	return name;
}

int main()
{
	PhoneBook phoneBook; 
	while (1)
		phoneBook.AddContact();
}
