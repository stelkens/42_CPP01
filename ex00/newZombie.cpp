/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:22:22 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/07 16:34:00 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//"new" calls constructor and saves "z" on the heap. It needs to be freed with <delete z>;
Zombie* newZombie( std::string name){
	Zombie* z = new Zombie;
	z->setName(name);
	return(z);
}