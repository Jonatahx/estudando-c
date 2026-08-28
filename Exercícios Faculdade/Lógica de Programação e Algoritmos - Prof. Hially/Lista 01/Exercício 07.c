#include <stdio.h>

int main(){
    // . Faça um programa que receba o salário-base de um funcionário, calcule e
    // mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
    // 50,00 e paga imposto de 10% sobre o salário-base.
    float salario_base;
    float imposto;
    float salario_final;
    
    printf("Digite seu salario: \n");
    scanf("%f", &salario_base);
    
    imposto = salario_base * 0.10;
    
    salario_final = salario_base + 50 - imposto;
    
    printf("Seu salário final será: R$ %.2f", salario_final);
    
    return 0;
}