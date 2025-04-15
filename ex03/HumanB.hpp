/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:43:56 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 15:16:31 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string name, Weapon &weapon);
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif