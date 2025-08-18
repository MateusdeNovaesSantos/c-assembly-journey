// #include é uma "diretiva de pré-processador".
// Ela diz ao compilador para incluir o conteúdo de outro arquivo.
// stdio.h significa "Standard Input/Output Header" e contém
// a declaração da função printf, que usamos para imprimir na tela.
#include <stdio.h>

// A função main é o ponto de entrada de todo programa em C.
// 'int' significa que ela retorna um número inteiro.
// 'void' significa que ela não recebe nenhum argumento.
int main(void) {
	// printf é a função que "imprime formatado" no console.
	// \n é um caractere especial que significa "nova linha".
	printf("Missão 1: A fundação foi estabelecida.\n");

	// Por convenção, retornar 0 da função main significa
	// que o programa foi executado com sucesso.
	return 0;
}
