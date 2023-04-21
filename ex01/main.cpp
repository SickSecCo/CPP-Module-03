#include "ScavTrap.hpp"

int main(void){

	ScavTrap ugo;
	std::cout << "--" << std::endl;
	ugo.guardGate();
	std::cout << "--" << std::endl;
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.beRepaired(3);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.beRepaired(3);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.attack("Lupo");
	ugo.takeDamage(2);
	ugo.beRepaired(3);
	ugo.beRepaired(3);
}