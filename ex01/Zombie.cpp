/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:08:24 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 13:00:08 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Constructor called\n";
	return;
}

Zombie::~Zombie(void){
	std::cout << "Destructor destroyed Zombie named: " << this->_name << '\n';
	return;
}

void	Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
	return;
}

void	Zombie::setName( std::string new_name ){
	_name = new_name;
	return;
}

