#include <stdio.h>
#include <locale.h>

int main(){]
	setlocale(LC_ALL, "Portuguese");

    int valor;
    float peso_kg, peso_gramas, quant_racao, consumo, resto_racao, resto_racao_kg;
    
    printf("Digite o peso do saco de ração em kg: \n");
    
    while(1){
        valor = scanf("%f", &peso_kg);
        
        if (valor != 1){
            printf("Erro! Digite um número.");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
        
    }
    
    printf("\nDigite a quantidade fornecida para cada gato em gramas: \n");
    
    while(1){
        valor = scanf("%f", &quant_racao);
        
        if (valor != 1){
            printf("Erro! Digite um número.");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
        
    }
    
    peso_gramas = peso_kg * 1000; //convertendo para gramas
    
    consumo = quant_racao * 2 * 5;
    
    resto_racao = peso_gramas - consumo;
    
    resto_racao_kg = resto_racao /1000;
    
    printf("\nO resto da ração em 5 dias será %.0f gramas ou %.2f kg", resto_racao, resto_racao_kg);
    
    return 0;
}
