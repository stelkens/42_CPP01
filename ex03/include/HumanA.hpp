/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 17:08:20 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 17:22:38 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {

private:
	std::string	_name;
	Weapon&		_winHand;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack(void);
};

#endif
