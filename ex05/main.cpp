#include "Harl.hpp"

int main() {
	
    Harl harl;

    std::cout << "Harl complains at different levels:\n";
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("RANDOM");

    return 0;
}
