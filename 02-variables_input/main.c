#include <stdio.h>

int main(void) {
	// 1. Declaração das variáveis (criando as "caixas")
	// Uma caixa do tipo 'int' chamada 'idade'.
	// Uma caixa do tipo 'char' chamada 'inicial'.
	int idade;
	char inicial;

	// 2. Interação com o usuário para obter a idade
	printf("Olá! Por favor, digite sua idade: ");

	// 3. Lendo o input do usuário
	// scanf "escaneia" o que o usuário digita no teclado.
	// "%d" é um "especificador de formato". Diz para o scanf esperar um número inteiro ou decimal.
	// &idade é CRUCIAL. O '&' significa "endereço de". Estamos dizendo ao scanf
	// para colocar o número que ele ler diretamente no endereço de memória da nossa variável 'idade'.
	scanf("%d", &idade);

	// 4. Interação para obter a inicial
	printf("Obrigado. Agora, digite a primeira letra do seu nome: ");

	// 5. Lendo o caractere
	// O espaço antes de "%c" é importante. Ele diz ao scanf para ignorar
	// qualquer "espaço em branco" (como o Enter que você pressionou depois de digitar a idade
	// antes de ler o caractere.
	scanf(" %c", &inicial);

	// 6.Exibindo os resultados
	// Usamos os especificadores de formato no printf para indicar onde as
	// variáveis devem ser inseridas na frase.
	printf("\nEntendido. Você tem %d anos e sua inicial é %c.\n", idade, inicial);

	return 0;
}
