#include <stdio.h>

// --- PROTÓTIPOS DAS FUNÇÕES ---
// Avisando ao compilador sobre nossos "especialistas".
// Agora podemos definir essas funções em qualquer ordem, até mesmo depois da main.
float somar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

// A função 'main' agora é o "chefe". Limpa e direta.
// A responsabilidade dela é orquestrada as chamadas, não fazer o trabalho pesado.
int main(void) {
	float num1, num2;

	printf("Digite o primeiro número: ");
	scanf("%f", &num1);

	printf("Digite o primeiro número: ");
	scanf("%f", &num2);
	
	// Chamando as funções e guardando o retorno delas em variáveis.
	float resultado_soma = somar(num1, num2);
	printf("%.2f + %.2f = %.2f\n", num1, num2, resultado_soma);
	
	float resultado_sub = subtrair(num1, num2);
	printf("%.2f - %.2f = %.2f\n", num1, num2, resultado_sub);

	float resultado_mult = multiplicar(num1, num2);
	printf("%.2f * %.2f = %.2f\n", num1, num2, resultado_mult);

	float resultado_div = dividir(num1, num2);
	// Só imprimimos o resultado da divisão se ele for válido.
	if (resultado_div != 0.0f || num1 == 0.0f) {
		printf("%.2f / %.2f = %.2f\n", num1, num2, resultado_div);
	}

	return 0;
}

// --- DEFINIÇÃO DAS FUNÇÕES ---
// Aqui está o código dos nossos "especialistas".

// Função que recebe dois floats (a, b) e retorna a soma deles.
float somar(float a, float b) {
	return a + b;
}

// Função que recebe dois floats e retorna a subtração.
float subtrair(float a, float b) {
	return a - b;
}

// Função que recebe dois floats e retorna a multiplicação.
float multiplicar(float a, float b) {
	return a * b;
}

// Função que recebe dois floats e retorna a divisão.
// Note que adivionamos uma lógica para tratar a divisão por zero.
float dividir(float a, float b) {
	if (b == 0) {
		printf("Erro: Divisão por zero não é permitida.\n");
		return 0.0f; // Retornamos 0 em caso de erro.
	} else {
		return a / b;
	}
}
