/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:11:33 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/13 20:27:33 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string Contact::GetLastName(){ 
	return LastName;}
std::string Contact::GetFirstName() { 
	return FirstName;}
std::string Contact::GetNickName(){ 
	return NickName;}
std::string Contact::GetPhoneNumber() { 
	return PhoneNumber;}
std::string Contact::GetDarkestSecret() { 
	return DarkestSecret;}

//setters (mutator functions)
void Contact::SetLastName(std::string l_Name){
	LastName = l_Name;}
void Contact::SetFirstName(std::string f_Name){
	FirstName = f_Name;} 
void Contact::SetNickName(std::string n_Name){
	NickName = n_Name;}
void Contact::SetPhoneNumber(std::string n_Phone){
	PhoneNumber = n_Phone;}
void Contact::SetDarkestSecret(std::string d_Secret){
	DarkestSecret = d_Secret;}
