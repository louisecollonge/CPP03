#pragma once

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap( const std::string& name );
		DiamondTrap( const DiamondTrap& other );
		~DiamondTrap();

		DiamondTrap	&operator=( const DiamondTrap& other );

		void whoAmI();
};
