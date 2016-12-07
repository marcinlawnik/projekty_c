#include <stdio.h>

int main(void) {
	
	int current = 0, sumaP = 0, sumaNP = 0;
	
	BEGIN:
	if (current > 9) {
		goto END;
	}
	if (current % 2 == 0) {
		sumaP += current;
	} else {
		sumaNP += current;
	}
	
	current++;
	goto BEGIN;
	END:
	printf("Parzyste: %d\n", sumaP);
	printf("Nieparzyste: %d", sumaNP);
	return 0;
}
