#include <stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int x, y;

	printf("Digite o valor da variável inteira \"x\": ");
	scanf("%d", &x);

	printf("Digite o valor da variável inteira \"y\": ");
	scanf("%d", &y);
	
	printf("-=-=-=-\nO valor inicial das variáveis\nx: %d\ny: %d\n", x, y);

	swap(&x, &y);

	printf("-=-=-=-\nO valor depois da função swap\nx: %d\ny: %d\n-=-=-=-\n", x, y);	

	return 0;
}
