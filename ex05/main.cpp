/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:11:45 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 18:11:20 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){

	Harl Herbert;
	Herbert.complain("DEBUG");
	Herbert.complain("WARNING");
	Herbert.complain("ERROR");
	Herbert.complain("INFO");
	Herbert.complain("another complain");
	return 0;
}