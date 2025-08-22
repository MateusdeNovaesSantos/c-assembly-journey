#include <stdio.h>

int main(void) {
	// Declaração de uma variável inteira
	int numero = 42;

	// Declaração de um ponteiro para um inteiro
	// O '*' aqui significa "esta é uma variável do tipo ponteiro para int".
	int *ponteiro_para_numero;
	
	// O operador '&' (address-of)
	// Atribuímos ao ponteiro o ENDEREÇO de 'numero'.
	ponteiro_para_numero = &numero;

	// Imprimindo as informações para comparação.
	printf("------------------------------------------\n");
	printf("Valor da variável 'numero': %d\n", numero);
	printf("Endereço da variável 'numero': %p\n", &numero); // %p para imprimir endereços
	printf("------------------------------------------\n");
	printf("Valor do ponteiro 'ponteiro_para_numero': %p\n", ponteiro_para_numero);

	// O operador '*' (desreferenciar)
	// Isso significa: "Vá para o endereço armazenado no ponteiro e me dê o VALOR que está lá."
	printf("Valor que o ponteiro APONTA: %d\n", *ponteiro_para_numero);
	printf("------------------------------------------\n");

	return 0;
}
