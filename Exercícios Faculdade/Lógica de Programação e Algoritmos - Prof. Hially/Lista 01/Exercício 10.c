#include <stdio.h>
#include <math.h>

int main(){
    float raio, area;

    printf("Digite o raio do círculo: \n");
    scanf("%f", &raio);
    
    area = M_PI * pow(raio, 2);

    printf("A área do círculo é: %f", area);
    
    return 0;
}