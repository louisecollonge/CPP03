#pragma once

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap // virtual to avoid double calling to Clap through Frag & Scav
{
	public:
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other );
		~FragTrap();

		FragTrap	&operator=( const FragTrap& other );

		void		highFivesGuys( void );
};
