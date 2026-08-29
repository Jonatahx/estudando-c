#include <stdio.h>

int main(){
    int valor;
    float fabrica, lucro, impostos, porcentagem_lucro, porcentagem_impostos, preco_final;
    
    printf("Digite o preço de fábrica: \n");
    
    while (1){
        valor = scanf("%f", &fabrica);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    printf("\nDigite o percentual do lucro do distribuidor: \n");
    
    while (1){
        valor = scanf("%f", &lucro);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    printf("\nDigite o percentual dos impostos aplicados: \n");
    
    while (1){
        valor = scanf("%f", &impostos);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    porcentagem_lucro = fabrica * (lucro / 100);
    
    porcentagem_impostos = fabrica * (impostos / 100);
    
    preco_final = porcentagem_impostos + porcentagem_lucro + fabrica;
    
    printf("\nO preço final do veículo será: R$ %.2f", preco_final);

    return 0;
}