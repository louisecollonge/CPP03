#include "FragTrap.hpp"

int	main()
{
	FragTrap	A("Bimo");
	FragTrap	B("Cocotte");

	std::cout << std::endl;

	A.attack(B.getName());
	if (A.getAttackSuccess())
		B.takeDamage(A.getAttackDamage());
	
	B.beRepaired(1);

	B.attack(A.getName());
	if (B.getAttackSuccess())
		A.takeDamage(B.getAttackDamage());
	
	B.attack(A.getName());
	if (B.getAttackSuccess())
		A.takeDamage(B.getAttackDamage());

	A.attack(B.getName());
	if (A.getAttackSuccess())
		B.takeDamage(A.getAttackDamage());
	
	B.beRepaired(1);

	B.highFivesGuys();

	A.attack(B.getName());
	if (A.getAttackSuccess())
		B.takeDamage(A.getAttackDamage());

	B.beRepaired(1);
	B.beRepaired(1);

	A.attack(B.getName());
	if (A.getAttackSuccess())
		B.takeDamage(A.getAttackDamage());
	
	B.attack(A.getName());
	if (B.getAttackSuccess())
		A.takeDamage(B.getAttackDamage());
	
	B.beRepaired(1);
	B.beRepaired(1);
	B.beRepaired(1);

	A.attack(B.getName());
	if (A.getAttackSuccess())
		B.takeDamage(A.getAttackDamage());
	
	A.attack(B.getName());
	if (A.getAttackSuccess())
		B.takeDamage(A.getAttackDamage());
	
	B.beRepaired(1);
	B.beRepaired(1);

	B.attack(A.getName());
	if (B.getAttackSuccess())
		A.takeDamage(B.getAttackDamage());
	
	A.highFivesGuys();

	std::cout << std::endl;

	return 0;
}
