/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 17:09:02 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/14 15:47:21 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include "Weapon.hpp"

class HumanB {

private:
	Weapon*		_winHand;
	std::string	_name;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& newWeapon);
};

#endif