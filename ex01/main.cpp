/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:24:55 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 13:42:31 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{   
    Zombie *horde = zombieHorde(10, "Test");
    for (int i = 0; i < 10; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}