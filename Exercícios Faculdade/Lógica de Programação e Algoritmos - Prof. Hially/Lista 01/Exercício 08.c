#include <stdio.h>

int main(){
    float deposito, juros, porcentagem_juros, rendimento, rendimento_total;
    
    printf("Digite o valor do depósito: \n");
    scanf("%f", &deposito);
    
    printf("Digite o valor da taxa de juros \n");
    scanf("%f", &juros);
    
    porcentagem_juros = juros / 100;
    
    rendimento = deposito * porcentagem_juros;
    
    rendimento_total = deposito + rendimento;
    
    printf("Seu rendimento foi: R$ %.2f\n", rendimento);
    
    printf("Valor total final: R$ %.2f", rendimento_total);
    
    return 0;
}