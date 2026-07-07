/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 16:57:47 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/07 17:15:39 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
	
private:
	std::string	type;

public:
	std::string&	Weapon::getType() const;
	void			Weapon::setType(std::string) const;
};

#endif