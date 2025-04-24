#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name )
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << RED_DARK << "FragTrap constructor called." << RESET << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap ( other )
{
	std::cout << RED_DARK << "FragTrap copy constructor called." << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED_DARK << "FragTrap destructor called." << RESET << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap& other )
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
		attackSuccess = false;
	}
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << YELLOW
			  << "High five ! :)"
			  << RESET << std::endl;
}
