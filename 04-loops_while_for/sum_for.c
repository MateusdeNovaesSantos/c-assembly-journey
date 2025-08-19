#include <stdio.h>

int main(void) {
	int quantidade;
	int i; // 'i' é uma variável de controle de loop muito comum (de 'index' ou 'iterator')
	float numero_atual;
	float soma_total = 0.0f; // Importante inicializar a soma com 0!
	
	printf("Quantos números você gostaria de somar? ");
	scanf("%d", &quantidade);

	// for (1. Comece com i=1; 2. Continue enquanto i <= quantidade; 3. Some 1 a i no final de cada volta)
	for (i = 1; i <= quantidade; i++) {
		printf("Digite o %d° número: ", i);
		scanf("%f", &numero_atual);
		// Acumulamos o valor na nossa variável de soma
		soma_total = soma_total + numero_atual; // ou simplesmente soma_total += numero_atual;
	}

	// '%2.f' diz ao printf para formatar o float com apenas 2 casas decimais.
	printf("\nA soma total dos %d números é: %.2f\n", quantidade, soma_total);

	return 0;
}
