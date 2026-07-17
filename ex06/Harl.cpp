/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 16:10:02 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 17:53:56 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::_debug(void){
	std::cout << "[ DEBUG ]\nI love having extra bacon!\n\n";
	return;
}

void	Harl::_info(void){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money!\n\n";
	return;
}

void	Harl::_warning(void){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free!\n\n";
	return;
}

void	Harl::_error(void){
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
	return;
}

const	Harl::Command Harl::commands[4] = {
	{"DEBUG", &Harl::_debug},
	{"INFO", &Harl::_info},
	{"WARNING", &Harl::_warning},
	{"ERROR", &Harl::_error},
};

void	Harl::complain(std::string level){
	for (int i = 0; i < 5; i++){
		if(commands[i].level == level){
			switch (i)
			{
			case 0:
				(this->*(commands[0].function))();
				//fall through
			case 1:
				(this->*(commands[1].function))();
				//fall through
			case 2:
				(this->*(commands[2].function))();
				//fall through
			case 3:
				(this->*(commands[3].function))();
				break;
			}
		}
		else if (i == 4)
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}