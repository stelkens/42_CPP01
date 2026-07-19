/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:55:13 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/19 17:22:14 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<string>
#include<iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);

	std::string	getName( void ) const;
	void		setName( std::string new_ame );
	void		announce( void );

private:
	std::string _name;
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );

#endif