#include <stdio.h>

int main(){
    int primeiro;
    int segundo;
    int terceiro;
    float media;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &primeiro);
    
    printf("Digite o segundo o número: \n");
    scanf("%d", &segundo);
    
    printf("Digite o terceiro o número: \n");
    scanf("%d", &terceiro);
    
    media = (primeiro + segundo + terceiro) / 3;

    printf("A média dos seus números é: %1.f", media);
    
    return 0;
}