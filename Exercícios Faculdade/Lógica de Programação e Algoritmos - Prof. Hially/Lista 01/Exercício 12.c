#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int  numero[2], valor;
    double resultado;
    
    
    printf("Digite dois números maiores que zero: \n");
    for (int i = 0; i < 2; i++) {
    
        while(1){
            valor = scanf("%d", &numero[i]);
            
            if(valor != 1){
            printf("Erro! Digite um número. \n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        if (numero[i] <= 0){
            printf("Erro! Digite um número maior que 0. \n");
            
            continue;
        }
        
        break;
        }
        
    }
    
    resultado = pow(numero[0], numero[1]);
    
    printf("\n%d elevado a %d é igual a: %.0lf", numero[0], numero[1], resultado);
    
    return 0;
}
