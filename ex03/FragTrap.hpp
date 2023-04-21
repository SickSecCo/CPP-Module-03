#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& fragghino);
		FragTrap &operator=(FragTrap const& fragghino);

		void highFivesGuys(void);
};