/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:55:13 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 17:22:23 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<string>
#include<iostream>

class Zombie {

private:
	std::string _name;
	
public:
	Zombie(void);
	~Zombie(void);

	void		setName( std::string new_ame );
	void		announce( void );
};
Zombie* zombieHorde(int N, std::string name);

#endif