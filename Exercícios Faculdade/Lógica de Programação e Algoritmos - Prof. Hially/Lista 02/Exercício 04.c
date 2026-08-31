#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, valor, c;
	
	printf("Digite o valor de A: \n");
	
    while (1){
        valor = scanf("%d", &a);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
	
	printf("Digite o valor de A: \n");
	
    while (1){
        valor = scanf("%d", &b);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    if (a == b){
    	c = a + b;
    	
    	printf("A + B é igual a: %d", c);
	}
	
	else {
		c = a * b;
		
		printf("A * B é igual a: %d", c);
	}
	
	return 0;
}
