#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int ano_nascimento, ano_atual, valor, idade_atual, idade_futura;
    
    printf("Digite o ano que você nasceu: \n");
    
    while (1){
        valor = scanf("%d", &ano_nascimento);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        break;
    }
    
    printf("Digite o ano atual: \n");
    
    while (1){
        valor = scanf("%d", &ano_atual);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        break;
    }
    
    idade_atual = ano_atual - ano_nascimento;
    
    idade_futura = 2050 - ano_nascimento;
    
    printf("\nA sua idade atual é: %d\n\n", idade_atual);
    
    printf("Sua idade em 2050: %d\n", idade_futura);

    return 0;
}
