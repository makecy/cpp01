#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

void HumanA::attack() {
	std::cout << " attacks with their " << _weapon.getType() <<std::endl;
}