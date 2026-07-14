/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:06:26 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/14 15:37:08 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newWeapon){
	_type = newWeapon;
}

const std::string&	Weapon::getType() const{
		return _type;
}

void				Weapon::setType(const std::string newWeapon){
	_type = newWeapon;
	return;
}