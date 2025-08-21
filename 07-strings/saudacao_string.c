#include <stdio.h>
// A "caixa de ferramentas" padrão para manipular strings em C.
#include <string.h>

int main(void) {
	// Declaramos um array de char com espaço para 49 caracteres + o terminador nulo '\0'.
	char nome[50];
	
	printf("Qual é o seu nome? ");

	// --- Lendo a string ---
	// Usamos "%s" para ler uma string.
	// PONTO CRÍTICO: Note que NÃO usamos o '&' antes de 'nome'.
	// O nome de um array em C já "aponta" para o endereço do seu primeiro elemento.
	// Logo, 'nome' já é o endereço que scanf precisa.
	scanf("%s", nome);

	printf("\nOlá, %s! Bem-vindo(a) à Missão 7.\n", nome);

	// --- Usando a biblioteca <string.h> ---

	// 1. strlen() - String Length (comprimento da string)
	// Conta quantos caracteres existem ANTES do terminador nulo '\0'.
	int tamanho = strlen(nome);
	printf("Seu nome tem %d caracteres.\n", tamanho);

	// 2. strcpy() - String Copy (cópia de string)
	// Você não pode fazer 'copia = original;' com strings. Deve usar strcpy.
	char copia_nome[50];
	strcpy(copia_nome, nome); // strcpy(destino, origem)
	printf("Eu fiz uma cópia do seu nome: %s.\n", copia_nome);

	// 3. strcmp() - String Compare (comparação de string)
	// Compara duas strings em ordem alfabética.
	// Retorna 0 se forem IGUAIS.
	// Retorna < 0 se a primeira vem antes da segunda.
	// Retorna > 0 se a primeira vem depois da segunda.
	if (strcmp(nome, "Gemini") == 0) {
		printf("Ei, nós temos o mesmo nome!\n");
	} else {
		printf("O seu nome é diferente do meu (Gemini).\n");
	}

	// ALERTA: scanf("%s", ...) para de ler no primeiro espaço em branco.
	// Se você digitar "Ada Lovelace", ele lerá apenas "Ada".
	printf("\nLembrete: scanf com %%s para no primeiro espaço.\n");
	
	return 0;
}
