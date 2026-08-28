#include <stdio.h>

int main(){
    float salario;
    float salario_porcentagem;
    float salario_final;
    float porcentagem_aumento;
    float porcentagem_final;
    
    printf("Digite seu salário: \n");
    scanf("%f", &salario);
    
    printf("Digite quantos porcentos será o aumento: \n");
    scanf ("%f", &porcentagem_aumento);
    
    porcentagem_final = porcentagem_aumento / 100;
    
    salario_porcentagem = salario * porcentagem_final;
    
    salario_final = salario_porcentagem + salario;

    printf("Parabéns! Seu salário aumentou para: R$ %.2f", salario_final);
    
    return 0;
}