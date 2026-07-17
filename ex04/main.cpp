/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstelken <tstelken@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:05:05 by tstelken          #+#    #+#             */
/*   Updated: 2026/07/17 14:45:21 by tstelken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream> //for .open
#include <cstdlib> //for EXIT_SUCCESS

std::string	ft_replace(std::string buffer, const std::string target, const std::string replace){
	size_t			pos_target = buffer.find(target);
	const size_t	target_len = target.length();
	const size_t	replace_len = replace.length();
	
	while(pos_target != std::string::npos){
		buffer.erase(pos_target,target_len);
		buffer.insert(pos_target,replace);
		pos_target = buffer.find(target,pos_target + replace_len);
	}
	return (buffer);
}

int main(int argc, char **argv){
	if (argc != 4)
		std::cerr << "Wrong number of arguments.\nEnter: <filename> <str_target> <str_replace>.\n";
	else{
		std::string			filename = argv[1];
		const std::string	target = argv[2];
		const std::string	replace = argv[3];
		
		std::string			buffer;
		std::ifstream		infile;
		std::ofstream		outfile;

		if (target.empty()){
			std::cerr << "Error: target file is empty.\n";
			return (EXIT_FAILURE);
		}
		infile.open(filename.c_str());
		if (infile.is_open() == true){
			filename += ".replace";
			outfile.open(filename.c_str(), std::ios::out | std::ios::trunc); //create new file, empty file if it exist already
			if(outfile.is_open() == true){
				while (std::getline(infile, buffer)){
					buffer = ft_replace(buffer, target, replace);
					outfile << buffer;
					if(infile.peek() != EOF)
						outfile << '\n';
				}
				infile.close();
				outfile.close();
			}
			else{
				std::perror("Error Outfile");
				std::cerr << "Outfile could not be created or emptyed.\n";
				infile.close();
				return (EXIT_FAILURE);
			}
		}
		else{
			std::perror("Error Infile");
			std::cerr << filename << ": opening file failed.\n";
			return (EXIT_FAILURE);
		}
		return(EXIT_SUCCESS);
	}
	return(EXIT_FAILURE);
}