#include <stdio.h>

#define NUM_ARRAY 5

int main(void) {
	int nums[NUM_ARRAY];
	int i;

	printf("--- Digite %d números ---\n", NUM_ARRAY);
	for (i = 0; i < NUM_ARRAY; i++) {
		printf("Digite o número da posição %d: ", i);
		scanf("%d", &nums[i]);
	}
	
	printf("\n<-> Revertido <->\n");
	for (i = NUM_ARRAY - 1; i > -1; i--){
		printf("nums[%d]: %d\n", i, nums[i]);
	}


	return 0;
}
