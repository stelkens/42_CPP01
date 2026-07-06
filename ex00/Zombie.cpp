/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:08:24 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/06 18:28:42 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void){
	if(_name.empty())
		return;
	std::cout << "Destructor destroyed Zombie named: " << this->_name << std::endl;
	return;
}

void	Zombie::announce( void ){
	if(_name.empty())
		return;
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

std::string	Zombie::getname( void ) const{
	return _name;
}

void	Zombie::setname( std::string new_name ){
	if(!new_name.empty())
		_name = new_name;
	return;
}

