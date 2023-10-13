/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:53:23 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/13 20:30:16 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <limits>
 #include <cstdlib>
#include "Contact.hpp"
std::string GetInput(std::string msg);

class PhoneBook {
private:
    Contact Contacts[8];
public:
	PhoneBook(){};
	void AddContact();
	void ContactTable(int a);
	void ContactInformation(int index, int a);
};


#endif