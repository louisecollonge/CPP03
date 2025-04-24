#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	A("Choubichomp");
	A.whoAmI();
	std::cout << std::endl;

	DiamondTrap	B("Bouzoum");
	B.whoAmI();
	std::cout << std::endl;

	DiamondTrap C(A);
	C.whoAmI();
	std::cout << std::endl;

	DiamondTrap D("Test");
	D = B;
	D.whoAmI();
	std::cout << std::endl;

	return 0;
}
