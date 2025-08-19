#include <stdio.h>

#define NUM_MAX 100

int main(void) {

	for (int i = 1; i <= NUM_MAX; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("\nFizzBuzz");
		} else if (i % 3 == 0) {
			printf("\nFizz");
		} else if (i % 5 == 0) {
			printf("\nBuzz");
		} else {
			printf("\n%d", i);
		}
	}

	printf("\n");
	return 0;
}
