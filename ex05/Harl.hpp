/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 16:05:38 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 16:54:47 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
	
	typedef	void (Harl::*funcPtr)(); //Alias for function pointer
	
	struct Command{
		std::string level;
		funcPtr		function;
	};
	
	static const	Command commands[4]; //static > all Object have same commands
	
public:
	void	complain(std::string level);
};

#endif