#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	

    float primeiro;
    float segundo;
    float terceiro;
    int peso1;
    int peso2;
    int peso3;
    float media;
    
    printf("Digite o primeiro número: \n");
    scanf("%f", &primeiro);
    
    printf("Digite o primeiro peso: \n");
    scanf("%d", &peso1);
    
    while (peso1 < 0){
        printf("Digite um peso válido: \n");
        scanf("%d", &peso1);
    }
    
    printf("Digite o segundo o número: \n");
    scanf("%f", &segundo);
    
    printf("Digite o segundo peso: \n");
    scanf("%d", &peso2);
    
    while (peso2 < 0){
        printf("Digite um peso válido: \n");
        scanf("%d", &peso2);
    }
    
    printf("Digite o terceiro o número: \n");
    scanf("%f", &terceiro);
    
    printf("Digite o terceiro peso: \n");
    scanf("%d", &peso3);
    
    while (peso3 < 0){
        printf("Digite um peso válido: \n");
        scanf("%d", &peso3);
    }
    
    media = (primeiro * peso1 + segundo * peso2 + terceiro * peso3) / (peso1 + peso2 + peso3);

    printf("A média dos seus números é: %.2f", media);
    
    return 0;
}
