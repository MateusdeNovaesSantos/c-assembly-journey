#include <stdio.h>

// Usamos #define para criar uma constante. É uma boa prática para
// "números mágicos" como 18. Se a idade de voto mudar, só alteramos aqui.
// O nome da constante, por convenção, é em maiúsculas.
#define IDADE_PARA_VOTAR 18

int main(void){
	int idade;

	printf("--- Verificador de Elegibilidade para Votação ---\n");
	printf("Por favor, digite sua idade: ");
	scanf("%d", &idade);

	// Aqui está a decisão!
	// O programa avalia a expressão: 'idade' é maior ou igual a 'IDADE_PARA_VOTAR'?
	// Se for verdade, o primeiro bloco é executado.
	if (idade >= IDADE_PARA_VOTAR) {
		printf("\nExcelente! Com %d anos, você já pode (e deve) exercer seu direito ao voto.\n", idade);
	}
	// Se a condição do 'if' for false, o programa pula para o bloco 'else'.
	else {
		int anos_faltantes = IDADE_PARA_VOTAR - idade;
		printf("\nAinda não. Faltam %d anos para você poder votar.\n", anos_faltantes);
	}

	printf("------------------------------------------------\n");

	return 0;
}
