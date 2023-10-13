/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:47:14 by kmahdi            #+#    #+#             */
/*   Updated: 2023/08/22 10:56:35 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>

void replaceWord(std::string &line, char **strs){
	std::string new_line;
	std::string s1 = std::string(strs[2]);
	std::string s2 = std::string(strs[3]);
	size_t start = 0;
	size_t wordPos = line.find(s1);
	while ( wordPos != std::string::npos){
		new_line += line.substr(start, wordPos - start);
		new_line += s2;
		start = wordPos + s1.length();
		wordPos = line.find(s1, start);
	}
	new_line += line.substr(start);
	line = new_line;
}

void replaceFile(char **strs)
{
	std::ifstream file_name(strs[1]);
	if (strs[2][0] == '\0')
	{
		std::cout << "Please entre target!!" << std::endl;
		exit(1);
	}
	std::string  n_file = std::string(strs[1]) + ".replace";
	const char *new_file = n_file.c_str();
	if (file_name.is_open()){
		std::ofstream file_replace(new_file);
		std::string line;
		while (std::getline(file_name, line, '\0'))
		{
			replaceWord(line, strs);
			file_replace << line;
		}
		file_name.close();
		file_replace.close();
	}
	else{
		std::cout << "Unable to open file." << std::endl;
		exit (1);
	}
}


int main(int ac, char **strs){
	if (ac == 4)
		replaceFile(strs);
	else
		std::cout << "Wrong Arguments, try again !!" << std::endl;
}
