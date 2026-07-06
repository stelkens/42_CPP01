/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:55:57 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/06 19:56:36 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	int n = 20;
	Zombie* horde = zombieHorde(n, "Manny");
	
	for (int i = 0; i < n; i++)
		horde[i].announce();
	
	int m = 3;
	Zombie* noHorde = zombieHorde(m, "Some");
	for (int i = 0; i < m; i++)
		noHorde[i].announce();

	delete[] horde;
	delete[] noHorde;
	return 0;
}