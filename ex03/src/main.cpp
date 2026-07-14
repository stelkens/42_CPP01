/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:26:36 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/14 17:22:24 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main (){
{
	Weapon club = Weapon("crude spiked club");
	HumanA blue("Blue", club);
	blue.attack();
	club.setType("some other type of club");
	blue.attack();
}
{
	Weapon club = Weapon("crude spiked club");
	HumanB jimi("Jimi");
	jimi.attack();
	jimi.setWeapon(club);
	jimi.attack();
	club.setType("some other type of club");
	jimi.attack();
	return 0;
}
}