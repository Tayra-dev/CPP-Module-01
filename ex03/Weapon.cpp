/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-roi <hle-roi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:38:54 by hle-roi           #+#    #+#             */
/*   Updated: 2025/04/15 15:15:00 by hle-roi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string value)
{
    this->type = value;
}

const std::string& Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string value)
{
    this->type = value;
}