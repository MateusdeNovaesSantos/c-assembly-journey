#include <stdio.h>

#define NUM_ALUNOS 5

int main(void) {
	// Declaração do nosso array:
	// "Crie uma estante de floats chamada 'notas', com NUM_ALUNOS gavetas."
	float notas[NUM_ALUNOS];
	float soma = 0.0f;
	float media;
	int i; // nossa variável de controle do loop
	
	// --- 1. Preenchendo o array ---
	printf("--- Por favor, insira as notas dos %d alunos ---\n", NUM_ALUNOS);

	// O loop 'for' é o parceiro perfeito para percorrer arrays.
	for (i = 0; i < NUM_ALUNOS; i++){
		// Usamos 'i + 1' para a mensagem ser mais amigável (Aluno 1, Aluno 2, etc.)
		printf("Digite a nota do aluno %d: ", i + 1);

		// Lemos o valor e o colocamos na "gaveta" de índice 'i' do array 'notas'.
		// O '&' é necessário pois scanf precisa do ENDEREÇO da gaveta.
		scanf("%f", &notas[i]);
	}

	// --- 2. Processando os dados do array ---
	// Agora que todas as notas estão guardadas, vamos somá-las.
	for (i = 0; i < NUM_ALUNOS; i++) {
		// Acessamos o valor da gaveta 'i' e o adicionamos à soma.
		soma += notas[i];
	}
	
	// Calculamos a média
	media = soma / NUM_ALUNOS;

	// --- 3. Exibindo os resultados ---
	printf("\n--- Relatório da Turma ---\n");
	printf("Notas inseridas: ");
	for (i = 0; i < NUM_ALUNOS; i++) {
		printf("%.2f ", notas[i]);
	}
	printf("\n");
	printf("A média da turma foi: %.2f\n", media);

	return 0;
}
