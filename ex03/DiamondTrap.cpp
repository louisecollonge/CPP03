#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& name ) 
	: ClapTrap(name + "_clap_name"), 
	  FragTrap(name), 
	  ScavTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	this->attackSuccess = false;

	std::cout << PURPLE_DARK
			  << "DiamondTrap constructor called."
			  << RESET << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) 
	: ClapTrap(other), 
	  FragTrap(other), 
	  ScavTrap(other), 
	  name(other.name)
{
	std::cout << PURPLE_DARK
			  << "DiamondTrap copy constructor called."
			  << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << PURPLE_DARK
			  << "DiamondTrap destructor called."
			  << RESET << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap& other )
{
	if (this != &other)
	{
		this->name = other.name;
		ClapTrap::name = other.name + "_clap_name";
		this->hitPoints = FragTrap::hitPoints;
		this->energyPoints = ScavTrap::energyPoints;
		this->attackDamage = FragTrap::attackDamage;
		this->attackSuccess = false;
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << YELLOW
			  << "<<I am "
			  << this->name
			  << ", herited from ClapTrap "
			  << ClapTrap::name 
			  << " !>>"
			  << RESET << std::endl;
}
