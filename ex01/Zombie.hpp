/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:55:13 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/07 16:34:30 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<string>
#include<iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);

	void		setName( std::string new_ame );
	void		announce( void );

private:
	std::string _name;
};
Zombie* zombieHorde(int N, std::string name);

#endif