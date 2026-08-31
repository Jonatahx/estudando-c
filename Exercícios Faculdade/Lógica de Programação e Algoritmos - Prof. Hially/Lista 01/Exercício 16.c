#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int valor;
    float horas_trabalhadas, salario_minimo, valor_hora, salario_bruto, imposto, salario_final;
    
    printf("Digite a quantidade de horas trabalhadas: \n");
    
    while (1){
        valor = scanf("%f", &horas_trabalhadas);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    printf("\nDigite o salário mínimo: \n");
    
    while (1){
        valor = scanf("%f", &salario_minimo);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        break;
    }
    
    valor_hora = salario_minimo / 2;
    
    salario_bruto = horas_trabalhadas * valor_hora;
    
    imposto = salario_bruto * 0.03;
    
    salario_final = salario_bruto - imposto;
    
    printf("\nO salário final será: R$ %.2f", salario_final);

    return 0;
}
