#include <stdio.h>

int main(){
    float base, altura, area;
    
    printf("Digite a base do triângulo: \n");
    scanf("%f", &base);
    
    printf("Digite a altura do triângulo: \n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("A área do seu triânulo é: %.1f", area);
    
    return 0;
}