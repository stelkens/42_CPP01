/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 16:05:38 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 18:02:51 by tstelken         ###   ########.fr       */
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
	
	
	struct Command{
		std::string level;
	};
	
	static const	Command commands[4]; //static > all Object have same commands
	
public:
	void	complain(std::string level);
};

#endif