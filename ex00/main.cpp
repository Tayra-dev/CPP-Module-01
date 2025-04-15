/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:08:26 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 13:15:48 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main(void)
{
    randomChump("Terance");
    randomChump("Zip");
    randomChump("1984");

    Zombie *marc = newZombie("Marc");
    delete marc;
    Zombie *test = newZombie("Test");
    test->announce();
    test->announce();
    delete test;
}