/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 16:57:47 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 17:22:45 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

/* getter usualy give back a const ref to something
so that the user can't change it. The second const in the
function declaration prohibits that the function itself changes
the object

setter take const, so they don't change the information which where
given to them*/

class Weapon {
	
private:
	std::string	_type;

public:
	Weapon(std::string newWeapon);
	
	const std::string&	getType() const;
	void				setType(const std::string newWeapon);
};

#endif