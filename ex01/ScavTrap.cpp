#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name )
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << BLUE_DARK << "ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << BLUE_DARK << "ScavTrap destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other )
{
	std::cout << BLUE_DARK << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap& alternative )
{
	if (this != &alternative)
	{
		name = alternative.name;
		hitPoints = alternative.hitPoints;
		energyPoints = alternative.energyPoints;
		attackDamage = alternative.attackDamage;
		attackSuccess = false;
	}
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << YELLOW
			  << "ScavTrap "
			  << name
			  << " is now in gate keeper mode."
			  << RESET << std::endl;
}
