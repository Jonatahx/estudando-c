#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    
	float salario;
    float salario_porcentagem;
    float salario_final;
    float porcentagem;
    
    printf("Digite seu salário: \n");
    scanf("%f", &salario);
    
    porcentagem = 0.25;
    
    salario_porcentagem = salario * porcentagem;
    
    salario_final = salario_porcentagem + salario;

    printf("Parabéns! Seu salário aumentou para: R$ %.2f", salario_final);
    
    return 0;
}
