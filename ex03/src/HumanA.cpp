/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:44:44 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/14 17:42:05 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _winHand(weapon){
	std::cout << _name << " arrived with *" << _winHand.getType() << "* in they Hands\n"; 
}

HumanA::~HumanA(void){
	std::cout << _name << " left the scene\n";
}

void HumanA::attack(void){
	std::cout << _name << " attacks with *" <<_winHand.getType() << "*\n";
}