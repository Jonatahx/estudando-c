#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	

    int primeiro;
    int segundo;
    int terceiro;
    int quarto;
    float media;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &primeiro);
    
    printf("Digite o segundo o número: \n");
    scanf("%d", &segundo);
    
    printf("Digite o terceiro o número: \n");
    scanf("%d", &terceiro);
    
    printf("Digite o quarto o número: \n");
    scanf("%d", &quarto);
    
    media = (primeiro + segundo + terceiro + quarto) / 4;

    printf("A média dos seus números é: %1.f", media);
    
    return 0;
}
