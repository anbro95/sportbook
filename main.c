#include <stdio.h>
#include "shared.h"

int main() {
	defineType(423);
	definePlane(250);
	int res = fuelCost(5, 15000);
	printf("%d\n", res);
	return 0;
}
