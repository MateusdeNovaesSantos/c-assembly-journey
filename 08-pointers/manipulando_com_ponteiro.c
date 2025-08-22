#include <stdio.h>

int main(void) {
	int valor = 100;
	int *ponteiro;

	ponteiro = &valor;

	printf("Valor inicial da variável 'valor': %d\n", valor);

	// Usamos o ponteiro para alterar o valor da variável original.
	// Diga: "Vá para o endereço que o ponteiro armazena e coloque 50 lá."
	*ponteiro = 50;

	printf("Novo valor da variável 'valor': %d\n", valor);

	// AGORA O AHA! MOMENT:
	// Isso é EXATAMENTE o que scanf("%d", &valor); faz!
	// A função scanf recebe o ENDEREÇO de 'valor', vai até lá e armazena o número digitado.
	printf("\nIsso é como o 'scanf' funciona por baixo dos panos.\n");

	return 0;
}
