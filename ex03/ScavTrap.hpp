#ifndef SERENA_HPP
# define SERENA_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(ScavTrap const& scavvino);
		ScavTrap &operator=(ScavTrap const& scavvino);
		ScavTrap(std::string name);

		void attack(const std::string &target);
		void guardGate();
};

#endif