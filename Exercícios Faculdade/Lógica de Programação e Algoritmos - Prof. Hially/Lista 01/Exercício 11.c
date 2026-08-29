#include <stdio.h>
#include <math.h>

int main(){
    float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;
    int menu, valor;
    
    while(1){
        printf("Digite um número maior que zero: \n");
        valor = scanf("%f", &numero);
        
        if(valor != 1){
            printf("Erro! Digite um NÚMERO. \n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        if (numero <= 0){
            printf("Erro! Digite um número maior que 0. \n");
            
            continue;
        }
        
        break;
    }
    
    quadrado = pow(numero, 2);

    cubo = pow(numero, 3);
    
    raiz_quadrada = sqrt(numero);
    
    raiz_cubica = cbrt(numero);
    
    
    while (1){
        printf("Digite qual operação deseja visualizar: \n"
        "1. Ao quadrado\n"
        "2. Ao cubo\n"
        "3. Raiz quadrada\n"
        "4. Raiz cúbica\n"
        "5. Sair.\n");
        
        valor = scanf("%d", &menu);
        
        if (valor != 1){
            printf("Digite apenas números.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        
        if (menu < 1 || menu > 5){
            printf("Digite uma opção válida: \n");
            
            continue;
        }
        
        if(menu == 1){
            printf("%.1f ao quadrado é: %.1f\n", numero, quadrado);
        }
        
        else if(menu == 2){
            printf("%.1f ao cubo é: %.1f\n", numero, cubo);
        }
        
        else if(menu == 3){
            printf("A raiz quadrada de %.1f é: %.1f\n", numero, raiz_quadrada);
        }
        
        else if(menu ==4){
            printf("A raiz cúbica de %.1f é: %.1f\n", numero, raiz_cubica);
        }
        
        else{
            printf("Saindo...");
            break;
        }
    }
    
    return 0;
}