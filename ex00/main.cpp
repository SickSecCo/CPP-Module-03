#include "ClapTrap.hpp"

int main (void) {
	ClapTrap ugo("Volpe");
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