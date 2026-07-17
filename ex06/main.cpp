/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:11:45 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 17:37:25 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include<iostream>

int	main(int argc, char **argv){

	if(argc != 2){
		std::cerr << "Error: Wrong number of Arguments\nEnter: ./harlFilter <LEVEL OF COMPLAIN>\n";
		return (1);
	}
	
	Harl Herbert;
	Herbert.complain(argv[1]);
	return 0;
}