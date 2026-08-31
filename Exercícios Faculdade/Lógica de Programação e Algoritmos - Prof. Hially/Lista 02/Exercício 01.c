#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int valor;
    int a, b, c, soma;
    
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

    printf("\nDigite o valor de B: \n");

    while (1){
        valor = scanf("%d", &b);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
        
            while (getchar() != '\n');
            
            continue;
            
        }
        
        break;
    }
    
    printf("\nDigite o valor de C: \n");
    
    while (1){
        valor = scanf("%d", &c);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
        
            while (getchar() != '\n');
            
            continue;
            
        }
        
        break;
    }
    
    soma = a + b;
    
    if (soma < c){
        printf("\nA soma de A + B é menor que C.\n");
        printf("%d + %d = %d < %d", a, b, soma, c);
    }
    
    else{
        printf("\nA soma de A + B é maior que C.\n");
        printf("%d + %d = %d > %d", a, b, soma, c);
    }
    
    return 0;
}
