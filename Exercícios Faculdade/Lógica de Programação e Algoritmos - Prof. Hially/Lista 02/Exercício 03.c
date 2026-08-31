#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;

	printf("Digite um número inteiro: \n");
	
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("\n%d é um número par", numero);
	}
	
	else {
		printf("\n%d é um número ímpar.", numero);
	}
	
	return 0;
}
