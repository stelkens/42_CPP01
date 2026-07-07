/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:46:48 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/07 16:48:24 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

/*References can not be NULL and need to be connected to variable at
initialisation. References can't change their variable to another.*/
int main(){
	std::string		s = "HI THIS IS BRAIN";
	std::string*	ptr = &s;
	std::string&	ref = s;

	std::cout << "Adress of string s:\t" << &s << "\n";
	std::cout << "Adress of string ptr:\t" << ptr << "\n";
	std::cout << "Adress of string ref:\t" << &ref << "\n\n";

	std::cout << "Value of string s:\t" << s << "\n";
	std::cout << "Value of string ptr:\t" << *ptr << "\n";
	std::cout << "Value of string ref:\t" << ref << "\n\n\n";

	//more tests
	// std::string		t = "THIS IS FOOT";
	// ptr = &t;
	// ref = t;
	// std::cout << "TESTING STRING *t*: ptr = &t> && ref = t\n";
	// std::cout << "Adress of string s:\t" << &s << "\n";
	// std::cout << "Adress of string t:\t" << &t << "\n";
	// std::cout << "Adress of string ptr:\t" << ptr << "\n";
	// std::cout << "Adress of string ref:\t" << &ref << "\n\n";
	
	// std::cout << "Value of string s:\t" << s << "\n";
	// std::cout << "Value of string t:\t" << t << "\n";
	// std::cout << "Value of string ptr:\t" << *ptr << "\n";
	// std::cout << "Value of string ref:\t" << ref << "\n";

	return 0;
}