#include <stdio.h>
// Vamos incluir a biblioteca 'unistd.h' para usar a função sleep(),
// que pausa o programa por um número de segundos.
#include <unistd.h>

int main(void) {
	
	int contador;

	printf("Digite um número para iniciar a contagem regressiva: ");
	scanf("%d", &contador);

	printf("\nIniciando lançamendo em...\n\n");

	// Enquanto o contador for maior que 0, o loop continua.
	while (contador > 0) {
		printf("%d...\n", contador);

		// Pausa o programa por 1 segundo para dar um efeito dramático.
		sleep(1);

		// Esta é a parte MAIS IMPORTANTE!
		// Decrementamos o contador. Sem isso, a condição 'contador > 0'
		// seria sempre verdadeira, e teríamos um loop infinito.
		contador = contador - 1;
	}

	printf("\nDECOLAGEM!\n");

	return 0;
}
