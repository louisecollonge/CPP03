#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap // virtual to avoid double calling to Clap through Frag & Scav
{
	public:
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap();

		ScavTrap	&operator=( const ScavTrap& other );

		void		guardGate();
};
