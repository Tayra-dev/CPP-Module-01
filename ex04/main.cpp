/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:38:11 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 17:09:45 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

std::string replaceAllOccurences(std::string buffer, std::string find, std::string replace)
{
    int i = buffer.find(find);
    while (i != -1)
    {
        buffer.erase(i, find.length());
        buffer.insert(i, replace);
        i = buffer.find(find);
    }
    return buffer;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "wrong number of arguments" << std::endl;
        return (1);
    }
    std::ifstream readFile(argv[1]);
    std::string buffer;
    std::string find = argv[2];
    std::string replace = argv[3];
    std::string output;
    if (!readFile.good() || !find.length() || !replace.length())
    {
        std::cout << "invalid arguments" << std::endl;
        return (1);
    }
    
    while (getline(readFile, buffer))
    {
        buffer = replaceAllOccurences(buffer, find, replace);
        output += buffer + "\n";
    }
    readFile.close();
    std::ofstream outputFile(((std::string)argv[1] + ".replace").c_str());
    if (!outputFile.good())
    {
        std::cout << "Output file error" << std::endl;
        return (1);
    }
    outputFile << output << std::endl;
    outputFile.close();
    return (0);
}
