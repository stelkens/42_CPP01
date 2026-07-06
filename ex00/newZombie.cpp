/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:22:22 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/06 18:17:32 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//z is created on the heap. It needs to be freed with <delete z>;
Zombie* newZombie( std::string name){
	Zombie* z = new Zombie;
	z->setname(name);
	return(z);
}