#include <stdio.h>

int main(void){
	int x, y;
	
	printf("Digite um número: ");
	scanf("%d", &x);

	printf("Digite outro número: ");
	scanf(" %d", &y);

	printf("\nA soma de %d e %d é igual a %d\n", x, y, x + y);
	printf("A subtração de %d por %d é igual a %d\n", x, y, x - y);
	printf("A multiplicação de %d por %d é igual a %d\n", x, y, x * y);
}
