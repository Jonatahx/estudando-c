#include <stdio.h>

int main(){
    float salario_base;
    float gratificacao;
    float imposto;
    float salario_final;
    
    printf("Digite seu salario: \n");
    scanf("%f", &salario_base);
    
    gratificacao = salario_base * 0.05;
    
    imposto = salario_base * 0.07;
    
    salario_final = salario_base + gratificacao - imposto;
    
    printf("Seu salário final será: R$ %.2f", salario_final);
    
    return 0;
}