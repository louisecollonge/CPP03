#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap();

		ScavTrap	&operator=( const ScavTrap& other );

		void		guardGate();
};
