#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float salario_base;
    float gratificacao;
    float imposto;
    float salario_final;
    
    printf("Digite seu salário: \n");
    scanf("%f", &salario_base);
    
    gratificacao = salario_base * 0.05;
    
    imposto = salario_base * 0.07;
    
    salario_final = salario_base + gratificacao - imposto;
    
    printf("Seu salário final será: R$ %.2f", salario_final);
    
    return 0;
}
