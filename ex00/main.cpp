#include "Zombie.hpp"

int main ()
{
	std::cout << "Creating a Zombie on the heap:" << std::endl;
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;
	
	std::cout << "Creating a Zombie on the Stack" << std::endl;
	randomChump("StackZombie");
	
	return 0;
}
