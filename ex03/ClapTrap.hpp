#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	protected:
		std::string	 name;
		unsigned int hit_point;
		unsigned int energy_point;
		unsigned int attack_damage;

	public:
		ClapTrap(void); 
		~ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &f);
		ClapTrap& operator=(ClapTrap const &f);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif