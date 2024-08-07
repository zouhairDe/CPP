/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:41:22 by zouddach          #+#    #+#             */
/*   Updated: 2024/08/07 02:15:13 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string	readFileContents(std::string filePath)
{
	std::ifstream inputFile(filePath, std::ios::in | std::ios::binary);
    if (!inputFile) {
        std::cerr << "Error opening file!" << std::endl;
        return "";
    }

    std::ostringstream oss;
    oss << inputFile.rdbuf();
	inputFile.close();
    return oss.str();
}

void WriteToFile(std::string filename, std::string content)
{
	std::ofstream outputFile(filename);
	if (!outputFile)
	{
		std::cerr << "Error opening the outfile!" << std::endl;
		return;
	}
	outputFile << content;
	outputFile.close();
}

int main(int ac, char **av)
{
	if (ac != 4 || !av[1] || !av[2] || !av[3])
	{
		std::cout << "Usage: ./NotALoser [1, 2, 3]" << std::endl;
		return 1;
	}
	std::string replaced = "";
	std::string filename = av[1];
	std::string toBeReplaced = av[2];
	std::string toReplaceWith = av[3];
	std::string content = readFileContents(filename);
	if (toBeReplaced == toReplaceWith)
	{
		std::cout << "Please provide a valid string to replace and a valid string to replace with" << std::endl;
		return 1;
	}
	if (content.empty())
		return 1;
	size_t pos = 0;
    size_t prevPos = 0;
    while ((pos = content.find(toBeReplaced, pos)) != std::string::npos)
	{
        replaced += content.substr(prevPos, pos - prevPos) + toReplaceWith;
        pos += toBeReplaced.length();
        prevPos = pos;
    }
    replaced += content.substr(prevPos);
    WriteToFile(filename + ".replace", replaced);
	return 0;
}
