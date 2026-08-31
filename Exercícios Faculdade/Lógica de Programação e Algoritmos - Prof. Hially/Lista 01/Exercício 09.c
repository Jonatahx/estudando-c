#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float base, altura, area;
    
    printf("Digite a base do trângulo: \n");
    scanf("%f", &base);
    
    printf("Digite a altura do triângulo: \n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("A área do seu triângulo é: %.1f", area);
    
    return 0;
}
