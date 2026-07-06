/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:55:57 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/06 18:45:54 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	//Zombie on the heap
	Zombie* Ali = newZombie("Aali");
	Ali->announce();
	
	Zombie* Name_changer = newZombie("Uschi");
	Name_changer->announce();
	Name_changer->setname("Tina");
	Name_changer->announce();
	
	//Zombie on stack in function, get destroyed by end of function
	randomChump("Stacki");

	delete Ali;
	delete Name_changer;
	return 0;
}