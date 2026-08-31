#include <stdio.h>
#include <locale.h>
    
int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int estado_sexo, estado_civil;
    char nome[50], sexo, civil;
    
    printf("Digite o nome: \n");
    scanf("%49s", nome);
    
    printf("\nInsira o sexo. \n");
    printf("Digite F para feminino.\n");
    printf("Digite M para masculino: \n");
    scanf(" %c", &sexo);
    
    while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm'){
        printf("Insira uma opção válida: \n");
        
        scanf(" %c", &sexo);
    }
    
    switch(sexo){
        case 'F':
        case 'f':
            estado_sexo = 1;
            break;

        case 'M':
        case 'm':
            estado_sexo = 2;
            break;

        default:
            printf("Opcao inválida");
    }
    
    printf("\nInsira o estado civil: \n");
    printf("Digite S para solteiro(a).\n");
    printf("Digite C para casado(a).\n");
    printf("Digite V para viúvo(a).\n");
    
    scanf(" %c", &civil);
    
    while (civil != 'S' && civil != 's' && civil != 'C' && civil != 'c'
    && civil != 'V' && civil != 'v'){
        printf("Insira uma opção válida: \n");
        
        scanf(" %c", &civil);
    }
    
    switch(civil){
        case 'S':
        case 's':
            estado_civil = 1;
            break;

        case 'C':
        case 'c':
            estado_civil = 2;
            break;
            
        case 'V':
        case 'v':
            estado_civil = 3;
            break;

        default:
            printf("Opcao inválida");
    }
    
    if (estado_sexo == 1 && estado_civil == 2){
        int tempo_casamento;
        printf("\nDigite o tempo de casamento em anos: \n");
        scanf("%d", &tempo_casamento);
        
        printf("\nDados cadastrados com sucesso!");
    }
    
    else {
        printf("\nDados cadastrados com sucesso!");
    }
    
    return 0;
}
