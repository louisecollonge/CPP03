#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : hitPoints(10), energyPoints(10), attackDamage(0), attackSuccess(false)
{
	this->name = name;

	std::cout << DARK_GREEN
			  << "ClapTrap "
			  << name
			  << " has been created."
			  << RESET
			  << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << DARK_GREEN
			  << "ClapTrap "
			  << name
			  << " has been destroyed."
			  << RESET
			  << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
	: name(other.name),
	  hitPoints(other.hitPoints), 
	  energyPoints(other.energyPoints), 
	  attackDamage(other.attackDamage),
	  attackSuccess(false)
{
	std::cout << DARK_GREEN
			  << "ClapTrap "
			  << name
			  << " has been created by copy."
			  << RESET
			  << std::endl;
}

ClapTrap	 &ClapTrap::operator=( const ClapTrap& other )
{
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

std::string		ClapTrap::getName()				const { return (name);			}
unsigned int	ClapTrap::getHitPoints() 		const { return (hitPoints);		}
unsigned int	ClapTrap::getEnergyPoints()		const { return (energyPoints);	}
unsigned int	ClapTrap::getAttackDamage()		const { return (attackDamage);	}
bool			ClapTrap::getAttackSuccess()	const { return (attackSuccess);	}

void	ClapTrap::attack( const std::string& target )
{
	if (energyPoints < 1 || hitPoints < 1) {
		attackSuccess = false;

		std::cout << ORANGE << "ClapTrap "
				  << name
				  << " cannot attack..."
				  << RESET << std::endl;
	} else {
		energyPoints -= 1;
		attackSuccess = true;

		std::cout << PINK
				  << "ClapTrap "
				  << name 
				  << " attacks "
				  << target
				  << ", causing "
				  << attackDamage
				  << " points of damage!"
				  << RESET
				  << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (hitPoints < amount) {
		hitPoints = 0;

		std::cout << BOLD
				  << "ClapTrap "
				  << name
				  << " is KO..."
				  << RESET << std::endl;
	} else {
		hitPoints -= amount;

		std::cout << BOLD_RED
				  << "ClapTrap "
				  << name 
				  << " takes "
				  << amount
				  << " points of damage!" 
				  << RESET
				  << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (energyPoints >= 1) {
		hitPoints += amount;
		energyPoints -= 1;

		std::cout << LIGHT_GREEN
				  << "ClapTrap "
				  << name 
				  << " is being repaired, receiving "
				  << amount
				  << " hit points and losing 1 energy point." 
				  << RESET << std::endl;
	} else {
		std::cout << ORANGE
				  << "ClapTrap "
				  << name
				  << " cannot repair itself..."
				  << RESET << std::endl;
	}
}
