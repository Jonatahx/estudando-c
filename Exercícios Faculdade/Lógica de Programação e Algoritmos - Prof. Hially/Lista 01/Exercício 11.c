#include <stdio.h>
#include <math.h>

int main(){
    float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;
    int menu;
    
    printf("Digite um número maior que zero: \n");
    scanf("%f", &numero);
    
    while(numero <= 0){
        printf("Erro! Digite um número maior que zero: \n");
        scanf("%f", &numero);
    }
    
    quadrado = pow(numero, 2);

    cubo = pow(numero, 3);
    
    raiz_quadrada = sqrt(numero);
    
    raiz_cubica = cbrt(numero);
    
    printf("Digite qual operação deseja visualizar: \n"
    "1. Ao quadrado\n"
    "2. Ao cubo\n"
    "3. Raiz quadrada\n"
    "4. Raiz cúbica\n");
    scanf("%d", &menu);
    
    if(menu == 1){
        printf("%f ao quadrado é: %.2f", numero, quadrado);
    }
    
    else if(menu == 2){
        printf("%f ao cubo é: %.2f", numero, cubo);
    }
    
    else if(menu == 3){
        printf("A raiz quadrada de %.2f é: %f", numero, raiz_quadrada);
    }
    
    else{
        printf("A raiz cúbica de %.2f é: %f", numero, raiz_cubica);
    }
    
    return 0;
}