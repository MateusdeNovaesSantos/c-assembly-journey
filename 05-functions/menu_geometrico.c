#include <stdio.h>

#define PI 3.14159f

float calcular_area_do_quadrado(void);
float calcular_area_do_circulo(void);

int main(void) {
	
	int i = 1;
	while (i == 1) {
		int j = 0;
		
		printf("\n--- Menu Geométrico ---\n1 - Calcular área do quadrado\n2 - Calcular área do círculo\n0 - Sair\n");
		scanf("%d", &j);

		if (j == 1) {
			float area_quadrado = calcular_area_do_quadrado();
			printf("A area do quadrado é igual a %.2f\n", area_quadrado);
		} else if (j == 2) {
			float area_circulo = calcular_area_do_circulo();
			printf("A area do circulo é igual a %.2f\n", area_circulo);
		} else if (j == 0) {
			i = 0;
		} else {
			printf("\nItem do menu para esse valor não existe.\n");
		}
	}

	return 0;
}

float calcular_area_do_quadrado(void) {
	float l = 0.0f;

	printf("\nDigite o valor do lado do quadrado: ");
	scanf("%f", &l);

	return l * l;
}

float calcular_area_do_circulo(void) {
	float r = 0.0f;
	
	printf("\nDigite o valor do raio do circulo: ");
	scanf("%f", &r);

	return PI * (r * r);
}
