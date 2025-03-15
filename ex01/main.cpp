#include "Zombie.hpp"

int main (void)
{
	Zombie* horde = zombieHorde(10, "Piksi");
	const int N = 10;
	for (int i = 0; i < N; ++i) {
    	horde[i].announce();
	}
	for (int i = 0; i < N; ++i) {
    	horde[i].~Zombie();
	}
	::operator delete[](horde);
	return 0;
}