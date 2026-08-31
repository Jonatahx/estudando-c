#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    float salario_base;
    float imposto;
    float salario_final;
    
    printf("Digite seu salário: \n");
    scanf("%f", &salario_base);
    
    imposto = salario_base * 0.10;
    
    salario_final = salario_base + 50 - imposto;
    
    printf("Seu salário final será: R$ %.2f", salario_final);
    
    return 0;
}
