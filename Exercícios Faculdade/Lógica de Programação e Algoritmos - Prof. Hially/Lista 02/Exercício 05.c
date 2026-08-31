#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
	
	int numero, valor, c;
	
	printf("Digite o valor do número: \n");
	
    while (1){
        valor = scanf("%d", &numero);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    if (numero >= 0){
    	c = numero * 2;
    	
    	printf("\nO dobro de %d é igual a: %d", numero, c);
	}
	
	else {
		c = numero * 3;
		
		printf("\nO triplo de %d é igual a: %d", numero, c);
	}
	
	return 0;
}
