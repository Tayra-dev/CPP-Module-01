/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:43:56 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 15:17:16 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        void attack();
};

#endif