#pragma once

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other );
		~FragTrap();

		FragTrap	&operator=( const FragTrap& other );

		void		highFivesGuys( void );
};
