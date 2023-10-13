/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:00:09 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/18 10:57:22 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

class Contact {
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
	//getters (Accessor functions)
	std::string GetLastName();
	std::string GetFirstName();
	std::string GetNickName();
	std::string GetPhoneNumber();
	std::string GetDarkestSecret();

	//setters (mutator functions)
	void SetLastName(std::string l_Name);
	void SetFirstName(std::string f_Name); 
	void SetNickName(std::string n_Name);
	void SetPhoneNumber(std::string n_Phone);
	void SetDarkestSecret(std::string d_Secret);
};

// prototypes ---->
int StringSpace(std::string input);
int NumberChecker(std::string input);
int StringChecker(std::string input);
std::string GetInput(std::string msg, int checker);
int GetIndex();
std::string AddDote(std::string name);

#endif
