#include <stdio.h>
// A biblioteca para alocação de memória.
#include <stdlib.h>

int main(void) {
	int n, i;
	float *array; // Nosso ponteiro que "apontará" para o início do array dinâmico
	float soma = 0.0f;
	float media;

	printf("Quantos números você quer somar? ");
	scanf("%d", &n);

	// --- 1. Alocando a memória dinamicamente com malloc ---
	// malloc(tamanho_em_bytes)
	// Solicitamos um bloco de memória do tamanho de 'n' floats.
	// O '(float *)' é um "cast", garantindo que o ponteiro retornado seja do tipo float.
	array = (float *)malloc(n * sizeof(float));

	// --- 2. Verificando se a alocação foi bem-sucedida ---
	// malloc retorna NULL se não houver memória suficiente.
	if (array == NULL) {
		printf("Erro: Não foi possível alocar memória suficiente.\n");
		return 1; // Retorna um código de erro
	}

	// --- 3. Usando o array dinâmico (a mesma sintaxe do array estático!) ---
	for (i = 0; i < n; i++) {
		printf("Digite o número %d: ", i + 1);
		scanf("%f", &array[i]); // A sixtaxe é a mesma, o que é ótimo!
		soma += array[i];
	}

	media = soma / n;
	printf("\nA média dos %.0f números é: %.2f\n", (float)n, media);

	// --- 4. Liberando a memória ---
	// O PASSO MAIS IMPORTANTE!
	// Retorna a memória para o sistema operacional, previnindo "memory leaks".
	free(array);

	// Boa prática: Apontar o ponteiro para NULL após a liberação.
	array = NULL;

	return 0;
}
