#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float raio, area;

    printf("Digite o raio do cálculo: \n");
    scanf("%f", &raio);
    
    area = M_PI * pow(raio, 2);

    printf("A área do cálculo é: %f", area);
    
    return 0;
}
