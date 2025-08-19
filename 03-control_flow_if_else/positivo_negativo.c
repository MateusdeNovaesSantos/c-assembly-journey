#include <stdio.h>

int main(void) {
	
	int num;

	printf("Digite um número: ");
	scanf("%d", &num);

	if (num > 0) {
		printf("\n%d é Positivo\n", num);
	} else if (num < 0) {
		printf("\n%d é Negativo\n", num);
	} else {
		printf("\n%d é Zero\n", num);
	}
		
	return 0;
}
