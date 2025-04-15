/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:14:39 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 14:30:32 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String    address : " << &str << std::endl;
    std::cout << "StringPTR address : " << stringPTR << std::endl;
    std::cout << "StringREF address : " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "String    value : " << str << std::endl;
    std::cout << "StringPTR value : " << *stringPTR << std::endl;
    std::cout << "StringREF value : " << stringREF << std::endl;

    std::cout << std::endl;
}