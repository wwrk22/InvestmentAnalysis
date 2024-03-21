#include "revenue.h"

Revenue::~Revenue() {
	std::cout << "Revenue destructor\n";
}

void Revenue::record() {
	std::cout << "record revenue\n";
}
