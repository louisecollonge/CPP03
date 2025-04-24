#pragma once

#define ORANGE		"\033[38;5;214m"
#define BOLD_RED 	"\033[1;31m"
#define RED 		"\033[0;31m"
#define PINK	 	"\033[0;35m"
#define DARK_GREEN	"\033[38;5;22m"
#define LIGHT_GREEN	"\033[38;5;46m" 
#define YELLOW		"\033[38;2;255;165;0m"
#define BLUE_DARK	"\033[34m"
#define RESET		"\033[0m"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other );
		~FragTrap();

		FragTrap	&operator=( const FragTrap& other );

		void		highFivesGuys( void );
};
