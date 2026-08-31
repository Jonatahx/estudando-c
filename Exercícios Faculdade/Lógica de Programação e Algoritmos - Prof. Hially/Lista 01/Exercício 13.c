#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    float medida, polegadas, jardas, milhas;
    int valor;
    
    printf("Digite uma medida em pés: \n");
    
    while (1){
        valor = scanf("%f", &medida);
        
        if (valor != 1){
            printf("Erro! Digite um número.\n");
            
            while (getchar() != '\n');
            
            continue;
        }
        break;
    }
    
    polegadas = medida * 12;
    
    jardas = medida / 3;
    
    milhas = jardas / 1760;
    
    printf("Convertendo sua medida para outras: \n\n");
    
    printf("%.2f para polegadas: %.2f\n", medida, polegadas);
    
    printf("%.2f para jardas: %.2f\n", medida, jardas);
    
    printf("%.2f para milha: %.2f", medida, milhas);


    return 0;
}
