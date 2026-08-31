#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int valor;
    float salario, cheque[2], cpmf[2], saldo_atual;
    
    printf("Digite seu salário: \n");
    
    while (1){
        valor = scanf("%f", &salario);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    printf("\nDigite o valor dos dois cheques: \n");
    
    for (int i = 0; i < 2; i++){
        
        while (1){
            valor = scanf("%f", &cheque[i]);
            
            if (valor != 1){
                printf("Erro! Digite um número. \n");
            
            while(getchar() != '\n');
            
            continue;
            
            }
            
            break;
        }
        
    }
    
    cpmf[0] = cheque[0] * 0.0038;
    
    cpmf[1] = cheque[1] * 0.0038;
    
    saldo_atual = salario - cheque[0] - cheque[1] - cpmf [0] - cpmf[1];
    
    printf("\nSaldo atual é: R$ %.2f", saldo_atual);

    return 0;
}
