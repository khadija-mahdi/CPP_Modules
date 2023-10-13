/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:52:19 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/13 20:30:29 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void PhoneBook::ContactTable(int a)
{
	std::cout << std::string((4 * 12) + 3, '-') << std::endl;
	std::cout  << std::setw(12) << std::left << "|Index"
		<< std::setw(12) << std::left << "|First Name " 
        << std::setw(12) << std::left << "|Last Name"
        << std::setw(12) << std::left << "|Phone Number |"
        << std::endl;
	    std::cout << std::string((4 * 12) + 3, '-') << std::endl;
	for (int i = 0 ; i < a; i++)
	{
    		std::cout << "|     " << std::setw(6) << std::left << i
              << std::setw(12) << std::left << "|" + AddDote(Contacts[i].GetFirstName())
              << std::setw(12) << std::left << "| " + AddDote(Contacts[i].GetLastName())
              << std::setw(12) << std::left << "|" + AddDote(Contacts[i].GetPhoneNumber()) << "  |"
              << std::endl;
	    	std::cout << std::string((4 * 12) + 3, '-') << std::endl;
	}
}

void PhoneBook::ContactInformation(int index, int a)
{
	while (1)
	{	
		int InputIndex = GetIndex();
		if (a == 8)
			index = 8;
		if (InputIndex < index)
		{
			std::cout << "First Name     : " << Contacts[InputIndex].GetFirstName() <<std::endl;
			std::cout << "Last Name      : " << Contacts[InputIndex].GetLastName() <<std::endl;
			std::cout << "Nick Name      : " << Contacts[InputIndex].GetNickName() <<std::endl;
			std::cout << "Phone Number   : " << Contacts[InputIndex].GetPhoneNumber() <<std::endl;
			std::cout << "Darkest Secret : " << Contacts[InputIndex].GetDarkestSecret() <<std::endl;
			break;
		}
		else
		{
			if (a == 0)
			{
				std::cout << "the contacts is empty , please add contact !!" << std::endl;
				break;
			}
			std::cout << "empty contact try again !!"<< std::endl;
			continue;
		}
	}
}

void PhoneBook::AddContact(){
	std::string command = GetInput("Entre one of this commands {'ADD' , 'SEARCH' , 'EXIT'} : ", 2);
	if (command != "ADD" && command != "SEARCH" && command != "EXIT")
		std::cout << command << " Invalid command , try again !!" << std::endl;
	static int index = 0;
	static int a = 0;
	if (command == "ADD"){
		std::string FrName = GetInput("Entre First Name : ", 0);
		Contacts[index].SetFirstName(FrName);
		std::string LsName = GetInput("Entre Last Name : ", 0);
		Contacts[index].SetLastName(LsName);
		std::string NkName = GetInput("Entre Nick Name : ", 2);
		Contacts[index].SetNickName(NkName);
		std::string FNbr = GetInput("Entre Phone Number : ", 1);
		Contacts[index].SetPhoneNumber(FNbr);
		std::string DrSecret = GetInput("Entre Darkest Secret : ", 2);
		Contacts[index].SetDarkestSecret(DrSecret);
		index++;
		if (index > 7)
			index = 0;
		a++;
		if (a > 7)
			a = 8;
	}		
	if (command == "SEARCH"){	
		ContactTable(a);
		ContactInformation(index, a);
	}
	if (command == "EXIT")
		std::exit(0);
}

