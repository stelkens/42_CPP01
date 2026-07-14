/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:16:20 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/14 17:20:31 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):_name(name), _winHand(NULL){
	std::cout << _name << " arrived with *no weapon*\n";
}

HumanB::~HumanB(void){
	std::cout << _name << " left the scene\n";
}

void	HumanB::attack(void){
	if(_winHand)
		std::cout << _name << " attacks with *" <<_winHand->getType() << "*\n";
	else
		std::cout << _name << " attacks with *their bare hands*\n";
}

void	HumanB::setWeapon(Weapon& newWeapon){
		_winHand = &newWeapon;
}