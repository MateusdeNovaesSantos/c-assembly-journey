#include <stdio.h>
#include <string.h>

#define SENHA_SECRETA "s3nh@F0rt3"

int main(void) {
	char senha[16];

	printf("Digite a senha: ");
	scanf("%s", senha);

	int tamanho_senha = strlen(senha);
	if(tamanho_senha > 7) {
		if (strcmp(senha, SENHA_SECRETA) == 0) {
			printf("\n--- Acesso concedido! ---\n");
		} else {
			printf("\n--- Acesso negado. ---\n");
		}
	} else {
		printf("\nA senha deve ter pelo menos 8 caracteres.\n");
	}
	
	return 0;
}
